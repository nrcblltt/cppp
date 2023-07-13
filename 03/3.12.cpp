#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;

int main() {
  vector<vector<int>> ivec; // legal, a vector of vector of int
  // vector<string> svec = ivec; // not legal, svec holds strings
  vector<string> svec(10, "null"); //legal, 10 strings with value "null"
}
