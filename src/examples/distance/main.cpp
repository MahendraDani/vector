#include<iostream>
#include "../../inc/vector.h"

int main(){

  Vector<int> a(1,13,14);
  Vector<int> b(14,14,13);

  double distance = Distance(a,b);
  std::cout << distance << std::endl;
  return 0; 
}