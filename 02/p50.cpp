int main() {
  int ival = 1024;
  int &refVal = ival;
  refVal = 2;
  int ii = refVal;
  return 0;
}
