#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item partial;
  Sales_item temp;
  int count = 0;

  if (std::cin >> partial) {
    ++count;
    while (std::cin >> temp) {
      if (temp.isbn() == partial.isbn()) {
	++count;
      } else {
	std::cout << partial.isbn() << " " << count << std::endl;
	partial = temp;
	count = 1;
      }
    }
    std::cout << partial.isbn() << " " << count << std::endl;
  }

  return 0;
}
    
