#include <iostream>

/*
Pass by value: passing a copied value to function
Pass by Reference: passing the address of variable to function
*/

// Pass by value
void swap_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Action in swap by value: ";
    std::cout << a << "   " << b << "\n";
}
// Pass by Reference
void swap_by_ref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Action in swap by ref: ";
    std::cout << a << "   " << b << "\n";
}

int main()
{
    int a = 10;
    int b = 20;

    std::cout << "Action in main before call swap by value: ";
    std::cout << a << "   " << b << "\n";

    swap_by_value(a, b);

    std::cout << "Action in main after call swap by value: ";
    std::cout << a << "   " << b << "\n";

    swap_by_ref(a, b);
    std::cout << "Action in main after call swap by ref: ";
    std::cout << a << "   " << b << "\n";

    return 0;
}