#include <iostream>
using namespace std;

int main()
{
      //固定的是data空間的value
      const int n = 10;
      const int m = 20;
      //固定的是data空間的value , 指標空間的value沒任何影響
      const int *p = &n;
      cout << p << endl;

      p = &m;
      cout << p << endl;
      int x = 10;
      int y = 20;
      //REVIEW : 宣告常量指標
      int *const z = &x;
      // z = &y; //  z是不可修改的

      return 0;
}