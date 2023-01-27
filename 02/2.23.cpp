#include <iostream>

int main() {

  int *p;
  if (p) {
    std::cout << "p points to a valid object" << p << std::endl;
  }

  return 0;
}

// uninitialized pointers
// p.54 there is no way to distinguish a valid address from an invalid one
// formed from the bits that happens to be in the memory in which the
// pointer was allocated
