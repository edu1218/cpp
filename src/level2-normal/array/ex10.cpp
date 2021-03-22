#include <iostream>
using namespace std;

int main()
{
    //陣列:左邊高維=分群,最右邊才是資料本身

    int x[2][3][4] =
        {
            {{0, 1, 0, 0}, {2, 3, 0, 0}, {4, 5, 0, 0}},
            {{6, 7, 0, 0}, {8, 9, 0, 0}, {10, 11, 0, 0}}};
    cout << typeid(x).name() << endl;
    cout << x << x[0][0] << endl;

    //取得各維度長度
    int len1 = sizeof(x) / sizeof(x[0]);
    int len2 = sizeof(x[0]) / sizeof(x[0][0]);
    int len3 = sizeof(x[0][0]) / sizeof(x[0][0][0]);

    cout << len1 << len2 << len3;

    //  output each element's value
    for (int i = 0; i < len1; ++i)
    {
        for (int j = 0; j < len2; ++j)
        {
            for (int k = 0; k < len3; ++k)
            {
                cout << "Element at x[" << i << "][" << j
                     << "][" << k << "] = " << x[i][j][k]
                     << endl;
            }
        }
    }
    return 0;
}