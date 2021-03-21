// #include <vector>

#include <stdio.h>
#include <stdlib.h>
using namespace std;
template<int N>
constexpr int upround_to_4()
{

      if constexpr(N%4==0){
            return N + 4;
      }else{
            return ((N - 1) / 4 + 1) * 4;
      }
}
int main(int argc, char const *argv[])
{

      constexpr int ur8 = upround_to_4<8>();
      constexpr int ur9 = upround_to_4<9>();
      constexpr int ur10 = upround_to_4<10>();
      constexpr int ur11 = upround_to_4<11>();
      constexpr int ur12 = upround_to_4<12>();
      constexpr int ur16 = upround_to_4<16>();




}
