cmake_minimum_required(VERSION 3.5)
project(SimpleCalc)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 使用GCC编译，编译选项加入OpenMP
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp")

# 添加加法模块子目录
add_subdirectory(add)

# 创建可执行文件
add_executable(simple_calc main.cpp)

# 链接加法库
target_link_libraries(simple_calc PRIVATE add_lib)