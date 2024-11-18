cmake_minimum_required(VERSION 3.0)
project(test)
#动态库的保存目录
set(LIBPATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
#可执行程序的保存目录
set(EXEPATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
#头文件路径
set(HEADPATH ${CMAKE_CURRENT_SOURCE_DIR}/include)
#库文件名字
set(CALCLIB calc)
set(SORTLIB sort)
#可执行程序名字
set(APPNAME1 app1)
set(APPNAME2 app2)


#添加子节点目录
add_subdirectory(calc)
add_subdirectory(sort)
add_subdirectory(test1)
add_subdirectory(test2)