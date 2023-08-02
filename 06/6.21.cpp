#include "Chapter6.h"
#include <iostream>

int main() {
  int a = 34;
  int b = 45;
  int c = 45;

  std::cout << largest(a, &b) << std::endl;
  std::cout << largest(b, &a) << std::endl;
  std::cout << largest(b, &c) << std::endl;

  return 0;
}

int largest(int i, const int *j) {
  if (i > *j)
    return i;
  return *j;
}
