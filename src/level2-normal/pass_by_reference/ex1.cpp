#include <iostream>
using namespace std;

void addOne(int &ref)//與傳值的拷貝值不同,還是要宣告type,&指示ref是別名
{
    ref = ref + 1;
}

int main()
{
    int value = 5;

    cout << "value = " << value << '\n';
    //調用時跟pass by value一樣
    addOne(value);
    cout << "value = " << value << '\n';
    return 0;
}