#include <iostream>

int main() {
  int a = 3, b = 4;
  decltype(a) c = a; // type of the variable, int
  decltype((b)) d = a; // reference
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;
  std::cout << d << std::endl;
  ++c; // c is now 4, a does not change
  ++d; // d is now 4, a changes to 4
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;
  std::cout << d << std::endl;
}
