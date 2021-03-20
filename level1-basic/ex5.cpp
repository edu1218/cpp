#include<iostream>
using namespace std;
int main()
{
    float a = 3.123456,b = 1234567.000000;
    swap(a,b);
    //沒有fixed 顯示出的值會被處理
    cout<<fixed;
    cout<<a<<"->"<<b<<endl;
    return 0;
}