#include <iostream>
#include <array>

#define array_size 10
#define arrary_data_type int

int main()
{
    /*in modern c++ use this array style instead C style "datatype arr_name[]"
        this style offerring multaple strong APIs*/

    std::array<arrary_data_type, array_size> array_name{12, 13, 14};

    std::array<int, 5> numbers{1, 2, 3, 4, 5};
    std::cout << "Size = " << numbers.size() << "\n";
    std::cout << "max_size = " << numbers.max_size() << "\n";
    std::cout << "front = " << numbers.front() << "\n";
    std::cout << "back = " << numbers.back() << "\n";
    std::cout << "address = " << numbers.data() << "\n";
    std::cout << "at(2)? = " << numbers.at(2) << "\n";

    return 0;
}