int main() {
  // not legal, we must initialize cp
  // int i, *const cp; // i int, cp constant pointer to int

  // not legal, we must initialize p2
  // int *p1, *const p2; // p1 pointer to int, p2 constant pointer to int

  // not legal, ic must be initialized
  // const int ic, &r = ic;

  // not legal, p3 must be initialized
  // const int *const p3;

  // legal, pointer to constant int
  const int *p; 
  
  return 0;
}
  
  
