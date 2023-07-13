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

  for (decltype(intv.size()) j = 0; j < intv.size() - 1; ++j) {
    cout << intv[j] + intv[j+1] << endl;
  }

  return 0;
}
  
