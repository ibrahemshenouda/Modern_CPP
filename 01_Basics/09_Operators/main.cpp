#include <iostream>

// list numbering
constexpr int FRIES_OPTION = 1;
constexpr int BURGER_OPTION = 2;
constexpr int EXIT_OPTION = 3;
constexpr int DEFAULT_OPTION = FRIES_OPTION;

// Price
constexpr int FRIES_PRICE = 1;
constexpr int BURGER_PRICE = 2;
constexpr int DEFAULT_PRICE = 0;
constexpr float DISCOUNT_VALUE = 0.1;
constexpr int MINIMUM_PRICE_FOR_DISCOUNT = 100;
constexpr int DOLLAR_IN_EGP_POUNDS = 47;

/*operator overloading (user defined)
result_typ operator+(operand1, operand2)
{
    //action
    return result;
}
*/
std::string operator+(int money, std::string curr)
{
    std::string result = std::to_string(money).append(curr);
    return result;
}

int main()
{
    int option = DEFAULT_OPTION;
    int total_money_in_dollar = DEFAULT_PRICE;

    while (option != EXIT_OPTION)
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
            std::cout << "Fries Price " << FRIES_PRICE << "$\n\n";
            total_money_in_dollar += FRIES_PRICE;
        }
        break;
        case BURGER_OPTION:
        {
            std::cout << "Burger Price " << BURGER_PRICE << "$\n\n";
            total_money_in_dollar += BURGER_PRICE;
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
    int total_money_in_Pound = total_money_in_dollar * DOLLAR_IN_EGP_POUNDS;
    if (total_money_in_Pound >= MINIMUM_PRICE_FOR_DISCOUNT)
    {
        int discount = total_money_in_Pound * DISCOUNT_VALUE;
        std::cout << "Congrats!! your discount is " << discount + std::string{"E"} << "\n";
        std::cout << "Your total price after discount is " << (total_money_in_Pound - discount) + std::string{"E"} << "\n";
    }
    return 0;
}