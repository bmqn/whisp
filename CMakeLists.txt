cmake_minimum_required(VERSION 3.25)

list(APPEND CMAKE_MODULE_PATH
	"${CMAKE_CURRENT_SOURCE_DIR}/cmake"
	"${CMAKE_CURRENT_SOURCE_DIR}/libs/antlr4/cmake")

include(SetupConfigs)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project(fmcS)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

if(APPLE)
set(CMAKE_OSX_ARCHITECTURES "arm64;x86")
endif()
if(MSVC)
set(ANTLR4_WITH_STATIC_CRT OFF)
endif()
if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++ -lc++abi")
endif()

set(CMAKE_PROJECT_VERSION "0.0.1")

set(PRJ_ROOT_DIR	${CMAKE_CURRENT_SOURCE_DIR})
set(PRJ_INC_DIR		"${PRJ_ROOT_DIR}/include")
set(PRJ_SRC_DIR		"${PRJ_ROOT_DIR}/src")
set(PRJ_LIB_DIR		"${PRJ_ROOT_DIR}/libs")
set(PRJ_RES_DIR		"${PRJ_ROOT_DIR}/res")

#--------------------------------------------------------------------------------------------------
#	Includes
#--------------------------------------------------------------------------------------------------

include(ExternalAntlr4Cpp)


#--------------------------------------------------------------------------------------------------
#	Packages
#--------------------------------------------------------------------------------------------------

set(ANTLR_EXECUTABLE "${CMAKE_CURRENT_SOURCE_DIR}/bin/antlr4/antlr-4.13.2-complete.jar")

find_package(ANTLR REQUIRED)


#--------------------------------------------------------------------------------------------------
#	Configuration
#--------------------------------------------------------------------------------------------------

if(MSVC)

add_compile_options(
	$<$<CONFIG:Release>:/O2>
	$<$<CONFIG:Distribution>:/O2>
	$<$<CONFIG:Release>:/GF>
	$<$<CONFIG:Distribution>:/GF>
	$<$<CONFIG:Release>:/Gy>
	$<$<CONFIG:Distribution>:/Gy>
	$<$<CONFIG:Release>:/fp:fast>
	$<$<CONFIG:Distribution>:/fp:fast>
)
add_link_options(
	$<$<CONFIG:Release>:/LTCG>
	$<$<CONFIG:Distribution>:/LTCG>
)

else()

add_compile_options(
	$<$<CONFIG:Debug>:-O0>
	$<$<CONFIG:Debug>:-g>
	$<$<CONFIG:Release>:-O3>
	$<$<CONFIG:Release>:-g>
	$<$<CONFIG:Distribution>:-O3>
)
add_link_options(
	$<$<CONFIG:Debug>:-fno-lto>
	$<$<CONFIG:Release>:-flto>
	$<$<CONFIG:Distribution>:-flto>
)

endif()

add_compile_definitions(
	ANTLR4CPP_STATIC
)


#--------------------------------------------------------------------------------------------------
#	Sources
#--------------------------------------------------------------------------------------------------

if(MSVC)
set(PRJ_MSVC_NATVIS
	"${PRJ_ROOT_DIR}/fmcS.natvis"
)
endif()

set(PRJ_HSP_SHARED
	"${PRJ_SRC_DIR}"
)

set(PRJ_HSP ${PRJ_HSP_SHARED})

set(PRJ_SRC_SHARED
	"${PRJ_SRC_DIR}/Main.cpp"
	"${PRJ_SRC_DIR}/ast/Tree.hpp"
	"${PRJ_SRC_DIR}/ast/Tree.cpp"
	"${PRJ_SRC_DIR}/ast/TreeBuilder.hpp"
	"${PRJ_SRC_DIR}/ast/Visitor.hpp"
	"${PRJ_SRC_DIR}/ast/Printer.hpp"
	"${PRJ_SRC_DIR}/compile/Compiler.hpp"
	"${PRJ_SRC_DIR}/interp/Machine.hpp"
	"${PRJ_SRC_DIR}/interp/Machine.cpp"
	"${PRJ_SRC_DIR}/interp/Writer.hpp"
	"${PRJ_SRC_DIR}/interp/Writer.cpp"
	"${PRJ_SRC_DIR}/vm/Vm.hpp"
	"${PRJ_SRC_DIR}/antlr/fmcSGrammar.h"
	"${PRJ_SRC_DIR}/antlr/fmcSGrammar.cpp"
	"${PRJ_SRC_DIR}/antlr/fmcSGrammarBaseListener.h"
	"${PRJ_SRC_DIR}/antlr/fmcSGrammarBaseListener.cpp"
	"${PRJ_SRC_DIR}/antlr/fmcSGrammarListener.h"
	"${PRJ_SRC_DIR}/antlr/fmcSGrammarListener.cpp"
	"${PRJ_SRC_DIR}/antlr/fmcSLexer.h"
	"${PRJ_SRC_DIR}/antlr/fmcSLexer.cpp"
)

set(PRJ_SRC ${PRJ_SRC_SHARED})

set(PRJ_PCH_SHARED
	"${PRJ_SRC_DIR}/fmcS.pch"
)

set(PRJ_PCH ${PRJ_PCH_SHARED})
 

#--------------------------------------------------------------------------------------------------
#	Libraries
#--------------------------------------------------------------------------------------------------


#--------------------------------------------------------------------------------------------------
#	Build
#--------------------------------------------------------------------------------------------------

add_executable(fmcS
	${PRJ_SRC}
)
if(MSVC)
target_sources(fmcS
	INTERFACE
		${PRJ_MSVC_NATVIS}
)
endif()
target_include_directories(fmcS
	INTERFACE
		${PRJ_INC_DIR}
	PRIVATE
		${PRJ_HSP}
		${ANTLR4_INCLUDE_DIRS}
)
target_precompile_headers(fmcS
	PRIVATE
		${PRJ_PCH}
)
target_link_libraries(fmcS
	PRIVATE
		antlr4_static
)
if(MSVC)
target_compile_options(fmcS
	PRIVATE
		/W1
		/Zc:preprocessor
)
else()
target_compile_options(fmcS
	PRIVATE
		-Wall
		-Wextra
		-Wpedantic
		-Wno-unused-parameter
		-Wno-switch
)
endif()
target_compile_definitions(fmcS
	PRIVATE
		$<$<CONFIG:Debug>:FMCS_DEBUG=1>
		$<$<CONFIG:Release>:FMCS_RELEASE=1>
		$<$<CONFIG:Distribution>:FMCS_DISTRIBUTION=1>
)
target_link_libraries(fmcS
	PRIVATE
		-lreadline
)

set_target_properties(fmcS PROPERTIES
	FOLDER "fmcS"
	VS_DEBUGGER_WORKING_DIRECTORY "$<TARGET_FILE_DIR:fmcS>"
	ARCHIVE_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
	LIBRARY_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
	RUNTIME_OUTPUT_DIRECTORY_DEBUG "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
	ARCHIVE_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
	LIBRARY_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
	RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
	ARCHIVE_OUTPUT_DIRECTORY_DISTRIBUTION "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
	LIBRARY_OUTPUT_DIRECTORY_DISTRIBUTION "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
	RUNTIME_OUTPUT_DIRECTORY_DISTRIBUTION "${CMAKE_BINARY_DIR}/${CMAKE_BUILD_TYPE}"
)

if(MSVC)
set_property(TARGET fmcS PROPERTY
	MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
)
endif()

#--------------------------------------------------------------------------------------------------
#	Resources
#--------------------------------------------------------------------------------------------------

# Copy resources
add_custom_target(fmcS_CopyResources
	ALL COMMAND
	${CMAKE_COMMAND} -E copy_directory ${PRJ_RES_DIR} $<TARGET_FILE_DIR:fmcS>
)
add_dependencies(fmcS
	fmcS_CopyResources
)
set_target_properties(fmcS_CopyResources PROPERTIES
	FOLDER "fmcS"
	VS_DEBUGGER_WORKING_DIRECTORY $<TARGET_FILE_DIR:fmcS
)
