#include <iostream>
#include <string>

int main()
{
    /*string library offerring strong APIs*/
    std::string username{"Ibrahim"};
    std::cout << username << "\n";

    std::cout << username.append(" shnouda") << "\n";
    std::cout << username.at(2) << "\n";
    std::cout << username.back() << "\n";
    std::cout << username.length() << "\n";
    std::cout << username.size() << "\n";
    std::cout << username.capacity() << "\n";
    std::cout << username.max_size() << "\n";

    return 0;
}