#include <iostream>
/*
為了使用諸如sqrt()和的數學函數abs()，我們需要包括頭文件cmath。
*/
#include <cmath>
using namespace std;

int main() {
    double number, squareRoot;

    number = 25.0;

    // sqrt() is a library function to calculate the square root
    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot;

    return 0;
}