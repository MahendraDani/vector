#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p(1,23);
  Point<int> q;

  q = p++;
  q.Print();

  return 0;
}
