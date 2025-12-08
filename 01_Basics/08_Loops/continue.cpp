#include <iostream>

int EXIT_CASE = 4;
int main()
{
    /*The continue statement breaks one iteration (in the loop),
    if a specified condition occurs,
    and continues with the next iteration in the loop.*/

    for (int i = 0; i < 10; i++)
    {
        if (i == EXIT_CASE)
        {
            continue;
        }
        std::cout << i << "\n";
    }
    return 0;
}