#include <iostream>
/*
Operators: Operatopn between one ore more variables
- For each operator:
    -Action: (built-in) or (user-defined) (operator overloding)).
    -Type: A*A R U L B
    -Result
    -no. of operands: (on or mode operand)
*/
int main()
{
    int a = 10;
    int b = 20;
    // Equality operator.
    if (a == b)
    {
        std::cout << "a = b" << "\n";
    }
    // Greater than operator.
    else if (a > b)
    {
        std::cout << "a > b" << "\n";
    }
    // Less than operator.
    if (a < b)
    {
        std::cout << "a < b" << "\n";
    }
    /*
    Operator: == , > , <
        1.Type         : Relational
        2.Action       : Compare 2 variables (equality, more, less)
        3.Result       : true or false
        4.# of operands: 2
    */
    return 0;
}