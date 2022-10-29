add_library(swap_library SHARED ./swap2.cpp)

# 为库文件添加头文件路径
target_include_directories(swap_library PUBLIC ${PROJECT_SOURCE_DIR}/include)
