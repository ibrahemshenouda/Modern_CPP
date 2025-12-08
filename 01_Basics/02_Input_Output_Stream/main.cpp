#include <iostream>
#include <string>
/*  core-guidelines
    1.intialize any var by default value before runtime
    2.dont use "endl", use "\n"
*/
int main()
{
    std::string name;
    int age = 0;

    std::cout << "Please Enter your name : ";
    std::cin >> name;

    std::cout << "Please Enter your age : ";
    std::cin >> age;

    std::cout << "your name is " << name << " age is " << age << "\n";
    std::cerr << "An error occurred!" << "\n";

    return 0;
}