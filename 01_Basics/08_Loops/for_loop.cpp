#include <iostream>

constexpr int FRIES_OPTION = 1;
constexpr int BURGER_OPTION = 2;
constexpr int EXIT_OPTION = 3;
constexpr int DEFAULT_OPTION = FRIES_OPTION;

int main()
{
    int option = DEFAULT_OPTION;

    /*
    for(starting point; condation; step )
    {
        operation
    }
    */
    for (/*optional*/; option != EXIT_OPTION; /*optional*/)
    {
        std::cout << "Menu: \n";
        std::cout << "  1.Fries\n";
        std::cout << "  2.Burger\n";
        std::cout << "  3.Exit Menu\n";

        std::cout << "Please select one of this options: ";
        std::cin >> option;
        switch (option)
        {
        case FRIES_OPTION:
        {
            std::cout << "Friues Price 1$\n\n";
        }
        break;
        case BURGER_OPTION:
        {
            std::cout << "Burger Price 2$\n\n";
        }
        break;
        case EXIT_OPTION:
        {
            std::cout << "Thank You!\n\n";
        }
        break;
        default:
            std::cout << "Invalid Option!!\n\n";
            break;
        }
    }
    return 0;
}