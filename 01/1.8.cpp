#include <iostream>

int main()
{
  std::cout << "/*"; // this works
  std::cout << "*/"; // this works
  //this doesn't std::cout << /* "*/" */;
  std::cout << /* "*/" /* "/*" */; //this works
}
