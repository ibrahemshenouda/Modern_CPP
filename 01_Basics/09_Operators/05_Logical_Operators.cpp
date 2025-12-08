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

    bool is_running = false;
    // Logical AND
    if (a > b && b == 10)
    {
        std::cout << "true\n";
    }
    else
    {
        std::cout << "false\n";
    }
    /*
    Operator: AND(&&)
        1.Type         : Logical
        2.Action       : check left cond. is true AND right cond. is true
        3.Result       : true otherwise false
        4.# of operands: 2
    */

    // Logical OR
    if (a > b || b == 10)
    {
        std::cout << "true\n";
    }
    else
    {
        std::cout << "false\n";
    }
    /*
    Operator: OR(||)
        1.Type         : Logical
        2.Action       : check left cond. is true OR right cond. is true
        3.Result       : true otherwise false
        4.# of operands: 2
    */

    // NOT
    if (!is_running)
    {
        std::cout << "not running";
    }
    /*
    Operator: NOT(!)
        1.Type         : Logical
        2.Action       : reverse true --> false , false --> true
        3.Result       : true or false
        4.# of operands: 1
    */
    return 0;
}