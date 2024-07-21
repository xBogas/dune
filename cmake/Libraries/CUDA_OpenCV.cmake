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

function(find_program_recursive result name)
    foreach(dir ${ARGN})
        file(GLOB_RECURSE found_program "${dir}/${name}")
        if(found_program)
            set(${result} ${found_program} PARENT_SCOPE)
            return()
        endif()
    endforeach()
endfunction()

if(CUDA_OPENCV)

	find_program_recursive(CMAKE_CUDA_COMPILER nvcc /usr/bin /usr/local)
	if(NOT CMAKE_CUDA_COMPILER)
		message(FATAL_ERROR "CUDA compiler (nvcc) not found.")
	endif()

	set(CMAKE_CUDA_ARCHITECTURES "all")
	enable_language(CUDA)

	find_package(CUDAToolkit REQUIRED)

	if(COMMAND CMAKE_POLICY)
		# find_package(CUDA) is removed
	  cmake_policy(SET CMP0146 OLD)
	endif(COMMAND CMAKE_POLICY)

	find_package(CUDA REQUIRED)

	if(CUDA_FOUND)
		message(STATUS "CUDA found version ${CUDA_VERSION_STRING}")
		set(DUNE_SYS_HAS_CUDA 1 CACHE INTERNAL "CUDA found")
		set(DUNE_USING_CUDA 1 CACHE INTERNAL "CUDA found")

		include_directories(${CUDA_INCLUDE_DIRS})
		message(STATUS "CUDA include dirs: ${CUDA_INCLUDE_DIRS}")

		set(CUDA_NVCC_FLAGS "${CUDA_NVCC_FLAGS}  -Xcompiler -Wall,-Wno-deprecated-declarations -Wno-pedantic")
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wno-pedantic")
		set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS} -Wall -Wextra -Wno-pedantic")

	endif(CUDA_FOUND)

	find_package(OpenCV REQUIRED)

	if(OpenCV_FOUND)
		message(STATUS "OpenCV found version ${OpenCV_VERSION}")
		set(DUNE_SYS_HAS_OPENCV 1 CACHE INTERNAL "OpenCV found")
		set(DUNE_USING_OPENCV 1 CACHE INTERNAL "OpenCV found")

		include_directories(${OpenCV_INCLUDE_DIRS})

		foreach(lib ${OpenCV_LIBS})
			set(DUNE_SYS_LIBS ${DUNE_SYS_LIBS} ${lib})
		endforeach()
	endif(OpenCV_FOUND)

	# Check if OpenCV was compiled with CUDA support
	if(OpenCV_CUDA_VERSION)

		message(STATUS "OpenCV found with CUDA support version ${OpenCV_CUDA_VERSION}")
		set(DUNE_SYS_HAS_OPENCV_CUDA 1 CACHE INTERNAL "OpenCV with CUDA support")
		set(DUNE_SYS_HAS_OPENCV_CUDA 1 CACHE INTERNAL "OpenCV with CUDA support")
		
	else()
		message(STATUS "OpenCV was not compiled with CUDA support")
	endif(OpenCV_CUDA_VERSION)

endif(CUDA_OPENCV)
