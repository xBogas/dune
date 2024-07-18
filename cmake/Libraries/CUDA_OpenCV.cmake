############################################################################
# Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      #
# Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  #
############################################################################
# This file is part of DUNE: Unified Navigation Environment.               #
#                                                                          #
# Commercial Licence Usage                                                 #
# Licencees holding valid commercial DUNE licences may use this file in    #
# accordance with the commercial licence agreement provided with the       #
# Software or, alternatively, in accordance with the terms contained in a  #
# written agreement between you and Faculdade de Engenharia da             #
# Universidade do Porto. For licensing terms, conditions, and further      #
# information contact lsts@fe.up.pt.                                       #
#                                                                          #
# Modified European Union Public Licence - EUPL v.1.1 Usage                #
# Alternatively, this file may be used under the terms of the Modified     #
# EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md #
# included in the packaging of this file. You may not use this work        #
# except in compliance with the Licence. Unless required by applicable     #
# law or agreed to in writing, software distributed under the Licence is   #
# distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     #
# ANY KIND, either express or implied. See the Licence for the specific    #
# language governing permissions and limitations at                        #
# https://github.com/LSTS/dune/blob/master/LICENCE.md and                  #
# http://ec.europa.eu/idabc/eupl.html.                                     #
############################################################################
# Author: João Bogas	                                                   #
############################################################################

if(CUDA_OPENCV)

	find_package(CUDA REQUIRED)
	find_package(OpenCV REQUIRED)

	# Check if OpenCV was compiled with CUDA support
	if(OpenCV_CUDA_VERSION)

		message(STATUS "OpenCV found with CUDA support version ${OpenCV_CUDA_VERSION}")
		set(DUNE_SYS_HAS_CUDA_OPENCV 1 CACHE INTERANL "OpenCV with CUDA support")
		set(DUNE_USING_CUDA_OPENCV 1 CACHE INTERNAL "OpenCV with CUDA support")

		include_directories(${OpenCV_INCLUDE_DIRS} ${CUDA_INCLUDE_DIRS})
		link_directories(${OpenCV_LIBS} ${CUDA_LIBRARIES})

		# message(STATUS "OpenCV libs: ${OpenCV_LIBS}")
		# message(FATAL_ERROR "Cuda libs: ${CUDA_LIBRARIES}")

		foreach(lib ${OpenCV_LIBS})
			dune_add_lib(${lib})
		endforeach()
		
		foreach(lib ${CUDA_LIBRARIES})
			dune_add_lib(${lib})
		endforeach()

	else()
		message(FATAL_ERROR "OpenCV with CUDA enable is required")
	endif()

endif()
