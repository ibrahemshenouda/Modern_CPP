#include <iostream>
/*
 -Pointers : Variables contains memory location
 // https://www.geeksforgeeks.org/cpp/pointers-vs-references-cpp/
 read this for more info
*/

int main()
{
    /*
    row pointers - c pointers:A pointer to variable "stores the address of variable"
    */
    int a = 10;
    int *pointer_a = &a;
    std::cout << "a = " << a << "\n";
    std::cout << "pointer_a = " << pointer_a << "\n";

    /*
    References 'const pointers': A reference (or alias) for variable.
    */

    int &ref_a = a;
    std::cout << "ref_a = " << ref_a << "\n";

    return 0;
}