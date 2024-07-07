#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p;
  p.Print();

  Point<float> p2(5.2f,9.7f);
  p2.Print();

  Point<long long> p3(522323232323,10123213231,5123213123213);
  p3.Print();

  Point<long long> p4(p3);
  p3.Print();
  return 0;
}
