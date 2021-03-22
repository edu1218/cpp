#include <iostream>
using namespace std;

int main() {
    
    constexpr int LENGTH = 10;
    int arr[LENGTH] = {0};
    int *p = arr;

    for(int i = 0; i < LENGTH; i++) {
      cout << "arr[" << i << "]: " << arr[i]
      << "\t&arr[" << i << "]: " << &arr[i]
      << "\tp+" << i << ": " << p + i << endl;
    }

    return 0;
}