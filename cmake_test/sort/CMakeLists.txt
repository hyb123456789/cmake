cmake_minimum_required(VERSION 3.0)
project(sort)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
include_directories(${HEADPATH})
set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(${SORTLIB} SHARED ${SRC})

