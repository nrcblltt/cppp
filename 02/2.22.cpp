#include <iostream>

int main() {
  int i = 0;
  int *p = &i;

  if (p)
    std::cout << p << std::endl; // prints (pointer value, address)

  if (*p)
    std::cout << *p << std::endl; // doesn't print (*p has value 0)

  i = 12;

  if (*p)
    std::cout << *p << std::endl; // prints (*p has value 12)

  p = nullptr;

  if (p)
    std::cout << p << std::endl; // doesn't print (p has value 0)

  return 0;
}
  
