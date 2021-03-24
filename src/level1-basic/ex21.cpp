#include <iostream>
#include<typeinfo>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned int value1{5u}; // 5 has type unsigned int
    long value2{6L};         // 6 has type long
    float f { 5.0f }; // 5.0f has type float
    float d { 4.1 }; // warning: 4.1 is a double literal, not a float literal
    cout << typeid(d).name();
    
    return 0;
}
