#include <iostream>
using std::end;
using std::cout;
using std::endl;

int main() {
  int ia[] = {2,3,5,7,9};

  for (int *i = ia; i != end(ia); ++i) {
    *i = 0;
  }

  for (int *j = ia; j!= end(ia); ++j) {
    cout << *j << endl;
  }

  return 0;
}
