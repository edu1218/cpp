#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    constexpr int LENGTH = 8;
    int arr[LENGTH] = {10};
    //REVIEW :查詢變數類型:typeid
    cout << typeid(arr).name() << ' ' << sizeof(arr) << endl; //這裡的arr被解釋成這個陣列本身空間大小
    cout << typeid(&arr).name() << ' ' << sizeof(&arr) << endl;//指標空間大小是依據作業系統位元
    //int:4bytes

    cout << arr << endl;      //這裡的會被解釋成arr[0]指標
    cout << arr + 1 << endl;  //將第一個adress偏移1個int大小
    cout << &arr << endl;     //這裡的會被解釋成arr指標
    cout << &arr + 1 << endl; //偏移LENGTH個int大小=32bytes=0x20
    //REVIEW :位移一整個陣列空間後再取得[0]指標跟原本的[0]的偏移量
    int len = *(&arr + 1) - arr;

    return 0;
}