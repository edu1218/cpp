#include <iostream>

int main()
{
    //ASCII代碼點97(code point 97)被解釋為字符“ a”
    char ch{ 'a' };//不建議 ch{ 97 };
    std::cout << ch << '\n';
    std::cout << static_cast<int>(ch) << '\n';
    std::cout << ch << '\n';
    return 0;
}