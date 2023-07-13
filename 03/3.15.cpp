#include <vector>
#include <string>
#include <iostream>
using std::string;

int main() {
  std::vector<string> stringv;
  string s;
  
  while(std::cin >> s)
    stringv.push_back(s);

  return 0;
}
