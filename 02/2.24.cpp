#include <iostream>

int main() {
  int i = 42;
  void *p = &i; // legal, void pointer can hold address of any object
  // long *lp = &i; // illegal, lp is pointer to long
  return 0;
}
