#include <iostream>
using namespace std;

void staticTest()
{
    // var is a static variable
    static int var = 0;
    ++var;

    cout << var << endl;
}
void localTest()
{
    // var is a static variable
    int var = 0;
    ++var;

    cout << var << endl;
}

int main()
{

    staticTest();
    staticTest();
    localTest();
    localTest();

    return 0;
}