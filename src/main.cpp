#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p(5,6,2);
  Point<int> q(1,1,1);

  Point<int> r = CrossProduct(p,q);

  std::cout << r << std::endl;
  std::cout << r.Magnitude() << std::endl;

  return 0;
}
