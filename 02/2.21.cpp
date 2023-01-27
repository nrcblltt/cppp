#include <iostream>

int main() {
  int i = 0;

  // double* dp = &i;
  // pointer to double, initialized with int

  // int *ip = i;
  // illegal, i is a lvalue

  int *p = &i;
  // correct, pointer to int initialized

  return i;
}
