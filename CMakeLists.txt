cmake_minimum_required (VERSION 3.8)

project ("CentralControlClientDemo")

macro(FIND_INCLUDE_DIR result curdir)
	file(GLOB_RECURSE children "${curdir}/*.h" "${curdir}/*.hpp")
	message(STATUS "children = ${children}")
	set(dirlist "")
	foreach(child ${children})
		string(REGEX REPLACE "(.*)/.*" "\\1" LIB_NAME ${child})
		if(IS_DIRECTORY ${LIB_NAME})
			LIST(APPEND dirlist ${LIB_NAME})
		endif()
	endforeach()
	set(${result} ${dirlist})
endmacro()

FIND_INCLUDE_DIR(INCLUDE_DIR_LIST ${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE SRC_DIR_LIST "src/*.cpp")

message(STATUS "SRC_DIR_LIST = ${SRC_DIR_LIST}")

include_directories(
	${INCLUDE_DIR_LIST}
)


add_executable (CentralControlClientDemo "include\CentralControlClientDemo.h" "src\CentralControlClientDemo.cpp")


