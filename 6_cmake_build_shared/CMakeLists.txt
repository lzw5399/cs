#############
#  动态库编译 #
#############
cmake_minimum_required(VERSION 3.0)
project(HELLO_WORLD_SHARED)
add_compile_options(-Wall -std=c++20 -O2)

set(CMAKE_BUILD_TYPE Debug)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

################
#  创建一个动态库
###############
# 添加库
add_library(swap3_library SHARED ./src/swap3.cpp)
# 为库文件添加头文件路径
target_include_directories(swap3_library PUBLIC ${PROJECT_SOURCE_DIR}/include)

############################
#  创建一个main.cpp的可执行文件
############################
# 生成可执行文件。将main.cpp生成可执行文件main_cmake
add_executable(main_cmake3 main.cpp)
target_link_libraries(main_cmake3 swap3_library)
