#include <iostream>
using std::begin;
using std::end;
using std::cout;
using std::endl;

int main() {
  
  int arr1[] = {2,3,4,5,6,7};
  int arr2[] = {2,3,4,5,6,8};

  auto b1 = begin(arr1);
  auto e1 = end(arr1);
  auto b2 = begin(arr2);
  auto e2 = end(arr2);

  if (e1 - b1 != e2 - b2) {
    cout << "arr1 and arr2 are different" << endl;
    return 0;
  }

  while (b1 != e1) {
    if (*b1 != *b2) {
      cout << "arr1 and arr2 are different" << endl;
      return 0;
    }
    ++b1;
    ++b2;
  }

  cout << "arr1 and arr2 are equal" << endl;

  return 0;
}

  

  
