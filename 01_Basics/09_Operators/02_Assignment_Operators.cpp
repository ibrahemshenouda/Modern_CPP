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
    int b = 0;
    std::cout << "a = " << a << " b before assignment = " << b << "\n";
    b = a;
    std::cout << "a = " << a << " b after assignment = " << b << "\n";

    /*
    Operator: =
        1.Type         : assignment
        2.Action       : copy
        3.Result       : tow variables / variable = value
        4.# of operands: 2
    */
    return 0;
}