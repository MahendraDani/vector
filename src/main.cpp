#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p(1,2,3);
  std::cout << p.Magnitude() << std::endl;
  return 0;
}
