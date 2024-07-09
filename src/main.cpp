#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p(1,2,3);
  Point<int> q(2,3,4);
  Point<int> r = p*q;
  r.Print();
  return 0;
}
