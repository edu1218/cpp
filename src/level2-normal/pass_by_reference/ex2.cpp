
#include <iostream>
#include <cmath>
//這個把參數要用作輸出的用法很危險,調用方會困擾
void getSinCos(double degrees, double &sinOut, double &cosOut)
{
    // sin() and cos() take radians, not degrees, so we need to convert
    static constexpr double pi { 3.14159265358979323846 }; // the value of pi
    double radians = degrees * pi / 180.0;
    sinOut = std::sin(radians);
    cosOut = std::cos(radians);
}

int main()
{
    double sin(0.0);
    double cos(0.0);

    // sin跟cos都只是進去當輸出用的
    getSinCos(30.0, sin, cos);

    std::cout << "The sin is " << sin << '\n';
    std::cout << "The cos is " << cos << '\n';
    return 0;
}