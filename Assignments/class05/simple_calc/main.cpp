#include <iostream>
#include <omp.h>
#include "add/add.h"

int main() {
    double a, b;
    std::cout << "输入两个数字 (用空格分隔): ";
    std::cin >> a >> b;

    // 打印当前使用的线程数
    int threads = omp_get_max_threads();
    std::cout << "使用OpenMP并行计算 (" << threads << " 线程)" << std::endl;

    double result = add(a, b);

    std::cout << a << " + " << b << " = " << result << std::endl;
    return 0;
}