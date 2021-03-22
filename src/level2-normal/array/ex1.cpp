#include <iostream>
using namespace std;

int main()
{
    //arr
    //變數:資結&位址
    //
    int arr[10] = {0};
    //typeid是關鍵字 ,不是函數
    cout << typeid(arr).name() << endl;
    cout << "arr：\t\t" << arr << endl //
         << "&arr：\t\t" << &arr << endl
         << "&arr[0]：\t" << &arr[0] << endl;

    return 0;
}