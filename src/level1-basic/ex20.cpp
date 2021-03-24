#include <iostream>
#include <limits>
#include <string>

int main()
{

    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    //REVIEW :去掉上面輸入時enter產生的\n
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << ", you picked " << choice << '\n';

    return 0;
}