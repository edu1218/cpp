
#include <string>

void foo( std::string& text) {}

int main()
{
  std::string text{ "hello" };

  foo(text); // ok
//   foo(text + " world"); // illegal, non-const references can't bind to r-values.

  return 0;
}