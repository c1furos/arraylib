#include "arraylib.h"
#include <iostream>
#include <iterator>

int main()
{
    int test[] = {1, 2, 3, 4, 5};
    size_t n = std::size(test);

    std::cout << "сумма элементов массива(1,2,3,4,5): " << arr_sum(test, n) << '\n';

    return 0;
}
