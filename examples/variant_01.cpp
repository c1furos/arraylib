#include "arraylib.h"
#include <iostream>
#include <iterator>

int main() {
    int temperature[] = {-8, -5, -3, 0, 2, 1, -1, -4, -6, -2, 0, 3, 5, 4, 2, 1, -2, -7, -9, -4, 0, 3, 6, 5, 2, -1, -3, -5, 1, 4};    
    
    std::size_t n = std::size(temperature);

    std::cout << "средняя температура: " << arr_average(temperature, n) << '\n';
    std::cout << "максимальная температура: " << arr_max(temperature, n) << '\n';
    std::cout << "минимальная температура: " << arr_min(temperature, n) << '\n';
    std::cout << "количество морозных дней: " << arr_count_negative(temperature, n) << '\n';
    std::cout << "медиана температур: " << arr_median(temperature, n) << '\n';
    return 0;
}
