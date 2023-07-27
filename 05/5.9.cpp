#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main() {
  string word;
  unsigned int aCount = 0;

  while (cin >> word) {
    for (auto c : word) {
      if (c == 'a')
	++aCount;
    }
  }

  cout << "a: " << aCount << endl;

  return 0;
}
