#include <iostream>

void foo(int *ptr)//宣告ptr是一個指向int的變數,然後將&value拷貝給ptr
{
    *ptr = 6;
}

int main()
{
    int value{ 5 };

    std::cout << "value = " << value << '\n';
    //傳進來的必須是指標
    foo(&value);
    std::cout << "value = " << value << '\n';
    return 0;
}