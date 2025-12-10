#include <iostream>
/*
-Function Design:
    1.Make it simple (limit number of lines inside function ~(4-5) lines.)
    2.Dose it just one thing
    3.Use qualifers (const) if you can

-Function Structure
output name (input)
{
    //code
}
    1.input: if read only -----> const datatype parameter_name
    2.output: if read only ----> const

*/

// 1. Function Prototype (Declaration)
// Tells the compiler: "There is a function with this name and shape, trust me."
void print_question(std::string question);

// 2. Function Definition before main
// No prototype needed because the compiler sees the full body before usage.
void print_hello(std::string name)
{
    std::cout << "Hello " + name << "\n";
}

int main()
{
    print_hello("Ibrahim");                       // Works fine
    print_question("Why do we need prototypes?"); // Works because of the prototype above
    return 0;
}

// 3. Function Definition after main
// Without the prototype at the top, calling this in main would cause a compile error.
void print_question(std::string question)
{
    std::cout << question << "\n";
}