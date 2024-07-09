#include<iostream>
#include "../../inc/vector.h"

int main(){
  Vector<int> a(1,3,5);
  Vector<int> b(12,4,5);

  double dotProduct = DotProduct(a,b);
  std::cout << dotProduct <<std::endl;
  return 0;
}
