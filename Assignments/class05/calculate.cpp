#include <iostream>
#include <chrono>

int main() {
    const long long N = 200000000;

    double result = 0;

    auto start = std::chrono::high_resolution_clock::now();

    for (long long i  = 0 ; i < N ; i++){
        result += i;
        result /=3 ;
        result /= 3;
        result /= 3;
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end-start);

    std::cout << "Result: "<< result << "\n";
    std::cout << "Time: " << duration.count() << "ms" << std::endl;

    return 0;
}
