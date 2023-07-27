#include <iostream>
#include <vector>
using std::begin;
using std::end;
using std::cout;
using std::endl;
using std::vector;

int main() {
  vector<int> v1 = {2,4,5,8,9};
  vector<int> v2 = {2,4,45,8,9};

  if (v1.size() != v2.size()) {
    cout << "v1 and v2 are different" << endl;
    return 0;
  }
  
  auto b1 = v1.cbegin();
  auto e1 = v1.cend();
  auto b2 = v2.cbegin();
  auto e2 = v2.cend();

  while (b1 != e1) {
    if (*b1 != *b2) {
      cout << "v1 and v2 are different" << endl;
      return 0;
    }
    ++b1;
    ++b2;
  }

  cout << "v1 and v2 are equal" << endl;
  
  return 0;
}
