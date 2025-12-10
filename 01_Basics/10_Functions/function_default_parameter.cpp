#include <iostream>

// Default Parameter
void Print_Error(std::string msg = "Error!")
{
    std::cout << msg;
}

int main()
{
    Print_Error();
    return 0;
}