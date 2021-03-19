#include<iostream>

/*
在C ++中，函數聲明的代碼應在函數調用之前。
但是，如果要在函數調用後定義函數，則需要使用函數原型。
例如
*/
void add(int, int);

int main() {
    // calling the function before declaration.
    add(5, 3);
    return 0;
}

// function definition
void add(int a, int b) {
    std::cout << (a + b);
}