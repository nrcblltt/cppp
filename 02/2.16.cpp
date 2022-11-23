#include <iostream>

int main()
{
  int i = 0, &r1 = i; double d = 0, &r2 = d;
  r2 = 3.14159; // valid d is assigned value 3.14159
  std::cout << r2 << " " << d << std::endl;  

  r2 = r1; // valid d is assigned value 0
  std::cout << r2 << " "  << r1 << " " << d << std::endl;

  i = r2; // valid i is assigned value 0
  std::cout << r2 << " " << i << std::endl;

  r1 = d; // valid 
  std::cout << r1 << " " << d << std::endl;

  int ival = 13;
  int &iref = ival;
  double dval = 2.4;
  double &dref = dval;

  iref = dref;
  std::cout << iref << " " << dref << std::endl;

  dval = 3.45;
  ival = 7;

  dref = iref;
  std::cout << iref << " " << dref << std::endl;
  
  return 0;
}
