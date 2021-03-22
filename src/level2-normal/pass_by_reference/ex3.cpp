#include <string>
using namespace std;
//傳入的時候要注意限制
void foo(string &text) {
    text += '1';
}

int main()
{
    string text{"hello"};

    foo(text); // ok

    //foo(text + " world"); // 警告中的右值是待計算的expr(左值是計算好的)

    return 0;
}