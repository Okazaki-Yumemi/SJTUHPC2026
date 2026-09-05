#include "add.h"
#include <vector>
#include <iostream>
#include <omp.h>

double add(double a, double b) {

    // 通过创建一个巨大的数组，我们实现了一个极其低效的加法
    // 这是计划的一部分（划掉）
    // 其实是为了演示OpenMP

    const int N = 100000000;
    std::vector<double> vec(N, a);

    double sum = 0.0;

    // OpenMP并行求和
    #pragma omp parallel for reduction(+:sum)
    for(int i = 0; i < N; i++) {
        sum += vec[i] + b;
    }

    return sum / N;
}