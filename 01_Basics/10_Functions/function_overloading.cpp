#include <iostream>
/*
function overloading: more than one function with the same name but different signature
signature = name + prameters
*/

int add(int a, int b) // compiler: add_int_int
{
    return (a + b);
}

float add(float a, float b) // compiler: add_float_float
{
    return (a + b);
}

double add(double a, double b) // compiler: add_double_double
{
    return (a + b);
}

// compiler identify functions based on signature

int main()
{
    // calling
    /* Note: C++ treats decimal numbers (e.g., 10.5) as 'double' by default,
    and whole numbers (e.g., 10) as 'int'.
    */

    /*
    To avoid ambiguity errors, use the 'f' suffix (e.g., 10.5f) for float numbers.

    Ambiguity Error: Occurs when the compiler finds multiple valid ways to convert
    parameters and cannot decide which function overload to call.
    ex:
    add(double, int)
    decide which function overload to call
    this : add(double, double)
    or this : add(int, int)
    or this : add(float, float)
    result: Ambiguity Error
    */

    std::cout << add(10, 20) << "\n";
    std::cout << add(float(10.5), float(12.3)) << "\n";
    std::cout << add(10.5f, 12.0f) << "\n";
    return 0;
}