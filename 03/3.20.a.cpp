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
    cout << "no numbers" << endl;
    return 1;
  }

  if (intv.size() < 2) {
    cout << "give me at least two numbers" << endl;
    return 2;
  }

  cout << endl;

  for (decltype(intv.size()) j = 0; j < intv.size() - 1; ++j) {
    cout << intv[j] + intv[j+1] << endl;
  }

  return 0;
}
  
