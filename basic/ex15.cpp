#include <iostream>
using namespace std;

// 默認參數(只有在函數原型時不用加變數)
void display(char = '*', int = 3);

// Invalid:要給滿
void add(char , int = 3);

// Invalid:要給滿
void add(char ='a', int);


int main() {
    int count = 5;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display();

    cout << "First argument passed: ";
     // #, 3 will be parameters
    display('#');

    cout << "Both arguments passed: ";
    // $, 5 will be parameters
    display('$', count);

    return 0;
}

void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}