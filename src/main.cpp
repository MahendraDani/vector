#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p1(1,1,3);
  Point<int> p2(1,3,15);

  double ans = Distance<int>(p1,p2);
  std::cout << "distance: " << ans << std::endl;
  return 0;
}
