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
    int a = 10, b = 20;
    int result = 0;
    std::cout << "a = " << a << " b = " << b << " result = " << result << "\n";
    result = a + b;
    std::cout << "a = " << a << " b = " << b << " result = " << result << "\n";
    result = a - b;
    std::cout << "a = " << a << " b = " << b << " result = " << result << "\n";
    result = a * b;
    std::cout << "a = " << a << " b = " << b << " result = " << result << "\n";
    result = a / b;
    std::cout << "a = " << a << " b = " << b << " result = " << result << "\n";

    /*
    Operator: + - * /
        1.Type         : Arithmetic
        2.Action       : add, sub, mul, div
        3.Result       :
        4.# of operands: 2
    */
    return 0;
}