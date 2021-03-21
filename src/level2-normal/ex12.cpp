#include <typeinfo>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    auto t="hello";
    cout << typeid(t).name()<<endl;
    char s[] = "hello";
    cout << typeid(s).name()<<endl;
    char *text = "hello";//會有警告,需要加const
    return 0;
}
