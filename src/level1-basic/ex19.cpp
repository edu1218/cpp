#include <iostream>

int main()
{
    std::cout << !true << '\n'; // !true evaluates to 0
    bool b{false};
    std::cout << !b << '\n'; // !b is true, which evaluates to 1
    //REVIEW : cout configure:boolalpha
    std::cout << std::boolalpha;   // print bools as true or false
    std::cout << !b << '\n';       // true
    std::cout << std::noboolalpha; // turn it back off.
    std::cout << !b << '\n';       // !b is true, which evaluates to 1
    std::cout << "輸入'true'或'false'";
    std::cin >> std::boolalpha; //可以輸入'true'或'false'
    bool c{};
    std::cin >> c;
    std::cout << "you input: " << std::boolalpha << c;
    return 0;
}