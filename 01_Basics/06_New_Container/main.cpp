#include <iostream>
#include <array>
#include <string>
using namespace std;

constexpr int array_max = 10;
int n = 20;
constexpr int var1 = array_max; // accepted becouse array_max is constexpr
// constexpr int var2 = n; error

int main(void)
{
    std::array<std::string, array_max> usernames;
    return 0;
}
