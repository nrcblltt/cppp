#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;

int main() {
  cout << "Please input two strings" << endl;

  string s1, s2;
  string longer;

  cin >> s1 >> s2;

  if (s1.size() == s2.size()) {
    cout << "The two strings are of the same length" << endl;
  } else {
    if (s1.size() > s2.size()) {
      longer = s1;
    } else {
      longer = s2;
    }
    cout << longer << " is longer" << endl;
  }
  
  return 0;
}
