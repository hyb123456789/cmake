cmake_minimum_required(VERSION 3.0)
project(test2)

file(GLOB SRC ./*.cpp)
include_directories(${HEADPATH})
link_directories(${LIBPATH})
set(EXECUTABLE_OUTPUT_PATH ${EXEPATH})
add_executable(${APPNAME2} ${SRC})
target_link_libraries(${APPNAME2} ${SORTLIB})