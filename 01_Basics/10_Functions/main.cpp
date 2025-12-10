#include <iostream>
#include <string>

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

/*
function Structure
return_value <name>(Parameters)
{
    //code.. actions.
    return result;
}
*/
const int user_select()
{
    int option = DEFAULT_OPTION;
    std::cin >> option;
    return option;
}

void print_msg(const std::string msg)
{
    std::cout << msg;
}

std::string operator+(int money, std::string curr)
{
    std::string result = std::to_string(money).append(curr);
    return result;
}

int main()
{
    int option = DEFAULT_OPTION;
    int total_money_in_dollar = DEFAULT_PRICE;
    print_msg("Menu: \n");
    print_msg("  1.Fries\n");
    print_msg("  2.Burger\n");
    print_msg("  3.Exit Menu\n");

    while (option != EXIT_OPTION)
    {
        print_msg("Please select what do you need: ");
        option = user_select();

        switch (option)
        {
        case FRIES_OPTION:
        {
            print_msg("Fries Price " + std::to_string(FRIES_PRICE) + "$\n\n");
            total_money_in_dollar += FRIES_PRICE;
        }
        break;
        case BURGER_OPTION:
        {
            print_msg("Burger Price " + std::to_string(BURGER_PRICE) + "$\n\n");
            total_money_in_dollar += BURGER_PRICE;
        }
        break;
        case EXIT_OPTION:
        {
            print_msg("Thank You!\n\n");
        }
        break;
        default:
            print_msg("Invalid Option!!\n\n");
            break;
        }
    }
    int total_money_in_Pound = total_money_in_dollar * DOLLAR_IN_EGP_POUNDS;
    if (total_money_in_Pound >= MINIMUM_PRICE_FOR_DISCOUNT)
    {
        int discount = total_money_in_Pound * DISCOUNT_VALUE;
        print_msg("Congrats!! your discount is " + std::to_string(discount) + std::string{"E"} + "\n");
        print_msg("Your total price after discount is " + std::to_string(total_money_in_Pound - discount) + std::string{"E"} + "\n");
    }
    return 0;
}