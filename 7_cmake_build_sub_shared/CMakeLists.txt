#############
#  动态库编译 #
#############

cmake_minimum_required(VERSION 3.0)

project(HELLO_WORLD_STATIC)


add_compile_options(-Wall -std=c++20 -O2)

set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#########################################
#  直接添加子CMakeLists, 内部创建一个动态库
########################################

add_subdirectory(src)

############################
#  创建一个main.cpp的可执行文件
############################

# 生成可执行文件。将main.cpp生成可执行文件main_cmake
add_executable(main_cmake main.cpp)

target_link_libraries(main_cmake swap_library)
