#include <string>
#include <iostream>
using std::string;

int main() {
  string s = "word";
  string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
  std::cout << p1 << std::endl;
  return 0;
}
