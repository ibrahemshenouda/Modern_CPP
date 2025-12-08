#include <iostream>

constexpr int FRIES_OPTION = 1;
constexpr int BURGER_OPTION = 2;
constexpr int DEFAULT_OPTION = FRIES_OPTION;

int main()
{
    int option = DEFAULT_OPTION;
    std::cout << "Menu: \n";
    std::cout << "  1.Fries\n";
    std::cout << "  2.Burger\n";
    std::cout << "Please select one of this options: ";
    std::cin >> option;

    if (option == FRIES_OPTION)
    {
        std::cout << "Fries price = 1$\n";
    }
    else if (option == BURGER_OPTION)
    {
        std::cout << "Burger price = 2$\n";
    }
    else
    {
        std::cout << "Invaliad Option!!\n ";
    }
    return 0;
}