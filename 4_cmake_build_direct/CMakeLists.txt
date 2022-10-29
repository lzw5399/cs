##########################################################################################
#  直接编译 等价于 g++ main.cpp src/swap2.cpp -Iinclude -Wall -std=c++20 -O2 -o main_cmake #
#########################################################################################

cmake_minimum_required(VERSION 3.0)

project(HELLO_WORLD)


# 生成可执行文件。将main.cpp生成可执行文件main
add_executable(main_cmake main.cpp src/swap2.cpp)

# 向工程添加多个特定的头文件搜索路径。相当于g++ -Iinclude
include_directories(include)

# 添加编译选项
add_compile_options(-Wall -std=c++20 -O2)
