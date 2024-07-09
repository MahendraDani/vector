#include<iostream>
#include "../../inc/vector.h"

int main(){
  Vector<int> a(1,3,5);
  Vector<int> b(12,4,5);

  Vector<int> crossProduct = CrossProduct(a,b);
  std::cout << "Cross product of : " << a << " and " << b << " : " << crossProduct <<std::endl;
  return 0;
}
