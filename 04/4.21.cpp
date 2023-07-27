#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main() {
  vector<int> intv = {2,1,3,4,9};

  for (auto &i : intv) {
    (i % 2 != 0) ? i *= 2 : i = i;
  }

  for (auto j : intv) {
    cout << j << " ";
  }

  cout << endl;

  return 0;
}
