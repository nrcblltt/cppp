#include <iostream>

int main()
{
  int i = 27;
  int j = 45;
  int *pi = &j;

  std::cout << *pi << std::endl;

  // change value of a pointer
  pi = &i;

  std::cout << *pi << std::endl;

  std::cout << "i: " << i << std::endl;
  
  // change value to which the pointer points
  *pi = 34;

  std::cout << "i: " << i << std::endl;
}
