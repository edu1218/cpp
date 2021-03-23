#include <iostream>

int main()
{
	std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
    //會顯示科學記號9.87654e+0.6
    //6 significant digits:為了precision
	std::cout << 9876543.21 << '\n';
}