#include <iostream>
/*
Reg: Group of (Integers) .. Related .. const.
const int RED = 0;
const int GREEN = 1;
const int BLUE = 2;
*/

// Enum declaration
enum class color
{
    RED,   // 0
    GREEN, // 1
    BLUE   // 2
};

int main()
{
    // create instance
    color new_color = color::RED;
    return 0;
}