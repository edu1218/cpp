#include <iostream>
using namespace std;

int main()
{
    //REVIEW :取得多維陣列各個指標的方式
    int brr[2][3] =
        {
            {10, 20, 30}, {40, 50, 60}};
    int(*Pbrr)[2][3] = &brr;//這個陣列的指標
    int(*P0brr)[3] = brr;//[0]的指標

    int arr[1][2][3] =
        {
            {
                //1
                {10, 20, 30},
                {40, 50, 60} //2
            }};
    auto p = arr;//等於 int(*p)[2][3]=arr


    return 0;
}