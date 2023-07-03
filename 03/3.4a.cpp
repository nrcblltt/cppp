#include <iostream>
#include <string>

using std::string;
using std::endl;
using std::cout;
using std::cin;

int main() {
  cout << "Please input two strings" << endl;

  string s1, s2;
  string larger;

  cin >> s1 >> s2;

  if (s1 == s2) {
    cout << "The two strings are equal" << endl;
  } else {
    if (s1 > s2) {
      larger = s1;
    } else {
      larger = s2;
    }
    cout << larger << " is larger" << endl;
  }
  
  return 0;
}
