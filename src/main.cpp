#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p(1,2,3);
  Point<int> q(2,3,4);
  p.Print();
  p-=q;

  p.Print();
  return 0;
}
