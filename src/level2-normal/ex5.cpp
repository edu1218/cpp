#include <iostream>
using namespace std;

int main()
{
      //REVIEW : nullptr用來表示空指標的常數，可以指派給任意類型的指標變數
      //等效 int *p=nullptr;
      int *p = 0;//非數值0

      cout << "p 位址：" << p << endl
           << "p + 1：" << p + 1 << endl
           << "p + 2：" << p + 2 << endl;

      return 0;
}