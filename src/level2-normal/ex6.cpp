#include <iostream>
using namespace std;

int main()
{
    //陣列變數是指標
    int arr[10] = {0};
    cout << "arr：\t\t" << arr << endl
         << "&arr：\t\t" << &arr << endl
         << "&arr[0]：\t" << &arr[0] << endl;

    return 0;
}