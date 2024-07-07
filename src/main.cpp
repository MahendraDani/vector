#include<iostream>
#include "inc/point.h"

int main(){
  Point p;
  p.Print();

  Point p2(5,9);
  p2.Print();

  Point p3(5,10,5);
  p3.Print();

  Point p4(p3);
  p4.Print();
  return 0;
}
