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

    switch (option)
    {
    case FRIES_OPTION:
    {
        std::cout << "Friues Price 1$\n";
    }
    break;
    case BURGER_OPTION:
    {
        std::cout << "Burger Price 2$\n";
    }
    break;
    default:
        std::cout << "Invalid Option!!\n";
        break;
    }

    return 0;
}