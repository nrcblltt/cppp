#include <iostream>
#include <string>

int main() {
  std::string line;
  int count = 0;

  while (getline(std::cin, line)) {
    ++count;
  }

  std::cout << count << std::endl;
}
