#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p(-2,3,5);
  Point<int> q(1,2,3);

  std::cout << DotProduct(p,q);
  return 0;
}
