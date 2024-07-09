#include<iostream>
#include "../../inc/vector.h"

int main(){
  Vector<int> a(1,3,5);
  Vector<int> b(12,4,5);

  Vector<int> c = a + b; // vector addition
  std::cout << c << std::endl;
  return 0;
}
