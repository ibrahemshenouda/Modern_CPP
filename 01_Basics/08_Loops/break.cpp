#include <iostream>

int EXIT_CASE = 4;
int main()
{
    // The break statement can also be used to jump out of a loop.
    for (int i = 0; i < 10; i++)
    {
        if (i == EXIT_CASE)
        {
            break;
        }
        std::cout << i << "\n";
    }
    return 0;
}