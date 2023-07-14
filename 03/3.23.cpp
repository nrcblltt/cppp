#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> intv = {1,2,3,4,5,6,7,8,9,10};

  auto b = intv.begin();
  auto e = intv.end();

  for (; b != e; ++b) {
    cout << *b << " ";
  }

  cout << endl;

  for (b = intv.begin(); b != e; ++b) {
    *b = 2 * *b;
  }

  b = intv.begin();
  
  for (b = intv.begin(); b != e; ++b) {
    cout << *b << " ";
  }

  cout << endl;

  return 0;
}
