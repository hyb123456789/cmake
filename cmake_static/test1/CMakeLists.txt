cmake_minimum_required(VERSION 3.0)
project(test1)

file(GLOB SRC ./*.cpp)
include_directories(${HEADPATH})
link_libraries(${CALCLIB})
link_directories(${LIBPATH})
set(EXECUTABLE_OUTPUT_PATH ${EXEPATH})
add_executable(${APPNAME1} ${SRC})