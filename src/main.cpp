#include<iostream>
#include "inc/point.h"

int main(){
  Point<int> p(1,23);
  Point<int> q;

  q = p++;
  q.Print();
  
  Point<int> r(13,4,5);
  std::cout << "before" << std::endl;
  r.Print();
  r = q;
  std::cout << "after" << std::endl;
  r.Print();
  return 0;
}
