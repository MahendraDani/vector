#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p(1,2,3);
  Point<int> q(2,3,4);
  Point<int> r(10,3,1111);

  Point<int> ans = p -r -q;
  ans.Print();
  return 0;
}
