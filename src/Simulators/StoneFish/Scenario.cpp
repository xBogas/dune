//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: João Bogas                                                       *
//***************************************************************************

#include "Scenario.h"

// C++ headers.
#include <map>
#include <stdexcept>

// DUNE headers.
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Streams/Terminal.hpp>

// Stonefish headers.
#include <Stonefish/tinyxml2.h>

namespace Simulators
{
  namespace StoneFish
  {
    namespace Scenario
    {
      using tinyxml2::XMLDocument;
      using tinyxml2::XMLElement;

      //! Arguments passed to an included file, mapping name to value.
      typedef std::map<std::string, std::string> Args;

      static void
      scanFile(const std::string& path, const std::string& prefix, const Args& args,
               std::vector<Device>& out);

      //! Substitute $(arg name) tokens with the values from @a args.
      //! Unknown arguments are left untouched, so the caller can detect them.
      //! Mirrors the substitution done by Stonefish's ScenarioParser.
      static std::string
      resolveArgs(const std::string& value, const Args& args)
      {
        std::string result;
        size_t pos = 0;
        size_t start;

        while ((start = value.find("$(arg ", pos)) != std::string::npos)
        {
          const size_t end = value.find(')', start + 6);
          if (end == std::string::npos)
            break;

          result += value.substr(pos, start - pos);

          const std::string name = value.substr(start + 6, end - start - 6);
          Args::const_iterator itr = args.find(name);
          if (itr != args.end())
            result += itr->second;
          else
            result += value.substr(start, end - start + 1);

          pos = end + 1;
        }

        result += value.substr(pos);
        return result;
      }

      //! Collect the arguments declared as <arg> children of an include.
      static Args
      collectArgs(const XMLElement* include, const Args& parent)
      {
        Args args;
        for (const XMLElement* arg = include->FirstChildElement("arg"); arg != nullptr;
             arg = arg->NextSiblingElement("arg"))
        {
          const char* name = arg->Attribute("name");
          const char* value = arg->Attribute("value");
          if (name != nullptr && value != nullptr)
            args[name] = resolveArgs(value, parent);
        }
        return args;
      }

      //! Collect the devices declared under an element, recursively.
      //! @param[in] element element to scan.
      //! @param[in] prefix name of the enclosing robot, or empty.
      //! @param[in] dir directory of the current file, to resolve includes.
      //! @param[in] args arguments in scope for the current file.
      //! @param[out] out devices found.
      static void
      scanElement(const XMLElement* element, const std::string& prefix, const std::string& dir,
                  const Args& args, std::vector<Device>& out)
      {
        for (const XMLElement* child = element->FirstChildElement(); child != nullptr;
             child = child->NextSiblingElement())
        {
          const std::string tag = child->Name();

          if (tag == "include")
          {
            const char* file = child->Attribute("file");
            if (file == nullptr)
              continue;

            std::string include = resolveArgs(file, args);
            if (include.find("$(") != std::string::npos)
            {
              DUNE_WRN("Scenario", "skipping include with unresolved variables: " << include);
              continue;
            }

            if (include[0] != '/')
              include = dir + "/" + include;

            scanFile(include, prefix, collectArgs(child, args), out);
            continue;
          }

          if (tag == "robot")
          {
            const char* name = child->Attribute("name");
            scanElement(child, name != nullptr ? resolveArgs(name, args) : "", dir, args, out);
            continue;
          }

          if (tag == "sensor" || tag == "actuator")
          {
            const char* name = child->Attribute("name");
            const char* type = child->Attribute("type");
            if (name == nullptr || type == nullptr)
              continue;

            out.push_back(Device{ prefix, resolveArgs(name, args), resolveArgs(type, args) });
            continue;
          }

          scanElement(child, prefix, dir, args, out);
        }
      }

      //! Parse a file and scan it for devices.
      static void
      scanFile(const std::string& path, const std::string& prefix, const Args& args,
               std::vector<Device>& out)
      {
        XMLDocument doc;
        if (doc.LoadFile(path.c_str()) != tinyxml2::XML_SUCCESS)
          throw std::runtime_error("failed to parse scenario file: " + path);

        const XMLElement* root = doc.RootElement();
        if (root == nullptr)
          throw std::runtime_error("scenario file has no root element: " + path);

        const std::string dir = DUNE::FileSystem::Path(path).dirname().str();
        scanElement(root, prefix, dir, args, out);
      }

      std::vector<Device>
      scan(const std::string& path)
      {
        std::vector<Device> devices;
        scanFile(path, "", Args(), devices);
        return devices;
      }
    }
  }
}
