#include <iostream>
#include <string>
#include <array>

// list numbering
enum class option
{
    FRIES = 1,
    BURGER = 2,
    EXIT = 3,
    DEFAULT = FRIES
};

// Price
constexpr int FRIES_PRICE = 1;
constexpr int BURGER_PRICE = 2;
constexpr int DEFAULT_PRICE = 0;
constexpr float DISCOUNT_VALUE = 0.1;
constexpr int MINIMUM_PRICE_FOR_DISCOUNT = 100;
constexpr int DOLLAR_IN_EGP_POUNDS = 47;

std::istream &operator>>(std::istream &input_stream, option &result)
{
    int int_option;

    input_stream >> int_option; // integer

    // convert intger ---> option enum
    result = static_cast<option>(int_option);

    return input_stream;
}

option user_select()
{
    option option = option::DEFAULT;
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

class Menu
{
public:
    // variables(nouns) ----->   menu contains ---- ? options

    // functions (vers) -----> what do I need form menu ? just show it
    void show()
    {
        print_msg("Menu: \n");
        print_msg("  1.Fries\n");
        print_msg("  2.Burger\n");
        print_msg("  3.Exit Menu\n");
    }
};
int main()
{
    option option = option::DEFAULT;
    int total_money_in_dollar = DEFAULT_PRICE;
    // create new object from menu class
    Menu new_menu;
    new_menu.show();

    while (option != option::EXIT)
    {
        print_msg("Please select what do you need(Press 3 to EXIT): ");
        option = user_select();

        switch (option)
        {
        case option::FRIES:
        {
            print_msg("Fries Price " + std::to_string(FRIES_PRICE) + "$\n\n");
            total_money_in_dollar += FRIES_PRICE;
        }
        break;
        case option::BURGER:
        {
            print_msg("Burger Price " + std::to_string(BURGER_PRICE) + "$\n\n");
            total_money_in_dollar += BURGER_PRICE;
        }
        break;
        case option::EXIT:
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