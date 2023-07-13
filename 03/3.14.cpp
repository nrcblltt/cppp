#include <vector>
#include <iostream>
using std::vector;

int main() {
  vector<int> intv;
  int i;
  
  while(std::cin >> i)
    intv.push_back(i);

  return 0;
}
