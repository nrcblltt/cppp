#include <iostream>

int main() {
  // int i = -1, &r = 0; r must be initialized with an object
  int i2 = 18;
  int *const p2 = &i2; // valid
  const int i = -1, &r = 0; // valid, a const ref can be bound to a literal
  const int *const p3 = &i2; // not valid since i2 is not const
  // *p3 = 12; now this would not be valid
  const int *p1 = &i2; // valid
  // const int &const r2;  not valid, not initialized
  // const int i3 = i, &r = i;
  
  return 0;
}
