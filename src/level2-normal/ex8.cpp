#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *p1 = &n;
    int **p2 = &p1;

    cout << "n 位址：" << p1 << endl
         << "p1 位址：" << p2 << endl;

    return 0;
} 