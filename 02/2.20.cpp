#include <iostream>

int main() {
  int i = 42;
  int *p1 = &i;

  // this changes the value of the object pointed
  *p1 = *p1 * *p1;

  // both print 1764
  std::cout << i << std::endl;
  std::cout << *p1 << std::endl;
}
