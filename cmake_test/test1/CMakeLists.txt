cmake_minimum_required(VERSION 3.0)
project(test1)

file(GLOB SRC ./*.cpp)
include_directories(${HEADPATH})
link_directories(${LIBPATH})
set(EXECUTABLE_OUTPUT_PATH ${EXEPATH})
add_executable(${APPNAME1} ${SRC})
target_link_libraries(${APPNAME1} ${CALCLIB})