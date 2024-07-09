#include<iostream>
#include "inc/vector.h"

int main(){
  Vector<int> p(5,6,2);
  Vector<int> q(1,1,1);

  Vector<int> r = CrossProduct(p,q);

  std::cout << r << std::endl;
  std::cout << r.Magnitude() << std::endl;

  return 0;
}
