//Working of Implicit type-conversion

#include <iostream>
using namespace std;

int main()
{

      int num_int;
      double num_double = 9.99;

      // 隱性轉
      // 9.99這個值被轉
      num_int = num_double;

      cout << "num_int = " << num_int << endl;
      cout << "num_double = " << num_double << endl;

      double num2_double = 3.56;
      cout << "num2_double = " << num2_double << endl;

      // C風格轉換
      int num_int1 = (int)num2_double;
      cout << "num_int1   = " << num_int1 << endl;

      // 函數轉換
      int num_int2 = int(num2_double);
      cout << "num_int2   = " << num_int2 << endl;
      return 0;
}