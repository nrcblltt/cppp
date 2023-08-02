#include <iostream>

int main() {
  int sum = 0;
  int val = 1;

  while (sum += val, val < 10)
    ++val;

  std::cout << "sum 1 to 10 included is " << sum << std::endl;

  return 0;
}
