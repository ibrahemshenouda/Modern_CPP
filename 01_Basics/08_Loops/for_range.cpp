#include <iostream>
#include <array>
constexpr int array_size = 5;
int main()
{
    std::array<int, array_size> arr{1, 2, 3, 4, 5};

    for (int i : arr)
    {
        std::cout << i << " ";
    }
    return 0;
}