#include <iostream>
#include <bitset> // for std::bitset
using namespace std;
int main(int argc, char const *argv[])
{
    //用int
    int oct{02};//0開頭8進制
    int hex{ 0xcf }; // 0x before the number means this is hexadecimal
    int bin{0b11110000};
    // std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ bin }; // binary literal for binary 1100 0101
    std::bitset<8> bin2{ hex }; // hexadecimal literal for binary 1100 0101
    std::cout << bin1 << ' ' << bin2 << '\n';
	std::cout << std::bitset<4>{ 0b1010 } << '\n'; // we can also print from std::bitset directly

    //使用'來增加閱讀性
    int goodviewofbin{ 0b1011'0010 };  // assign binary 1011 0010 to the variable
    long value{ 2'132'673'462 }; // much easier to read than 2132673462
    int x { 12 };
    std::cout << x << '\n'; // decimal (by default)
    std::cout << std::hex << x << '\n'; // hexadecimal
    std::cout << x << '\n'; // now hexadecimal
    std::cout << std::oct << x << '\n'; // octal
    std::cout << std::dec << x << '\n'; // return to decimal
    std::cout << x << '\n'; // decimal
    return 0;
}
