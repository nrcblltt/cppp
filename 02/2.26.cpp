int main() {
  // illegal, not initialized
  // const int buf;

  // legal
  int cnt = 0;

  // legal, we copy the value of cnt
  const int sz = cnt;

  // illegal, we can't change sz
  ++cnt; // ++sz;

  return 0;
}
