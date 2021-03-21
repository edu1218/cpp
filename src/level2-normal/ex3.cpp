#include <iostream>

using namespace std;

// Global variable
int num;

// Function declaration
int& test();

int main()
{
    test() = 5;

    cout << num;

    return 0;
}
/*
"Return" by Reference
test()是num的reference(別名)
*/
//正確
//REVIEW : 函數作為reference
int& test()
{
    return num;
}
/*錯誤:因為不能回傳常量
int& test() {
    return 2;
}
*/
/*錯誤:因為不能回傳局部變數
int& test()
{
    int n = 2;
    return n;
}
*/