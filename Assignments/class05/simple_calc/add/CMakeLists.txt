# 创建加法静态库
add_library(add_lib STATIC add.cpp)

# 设置头文件位置（允许主程序包含"add/add.h"）
target_include_directories(add_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})