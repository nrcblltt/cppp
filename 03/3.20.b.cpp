#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<int> intv;
  int i;

  while(cin >> i) {
    intv.push_back(i);
  }

  if (intv.empty()) {
    cout << "empty vector" << endl;
    return 1;
  }

  cout << endl;

  decltype(intv.size()) j = 0;
  decltype(intv.size()) k = intv.size() - 1;

  for (; j <= k; ++j, --k) {
    cout << intv[j] + intv[k] << endl;
  }

  return 0;
}
