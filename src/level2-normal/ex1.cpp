#include <iostream>
using namespace std;

void staticTest()
{
    // var is a static variable
    //REVIEW : 靜態變量不會消失
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