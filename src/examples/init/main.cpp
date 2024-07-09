#include<iostream>
#include "../../inc/vector.h"

int main(){
  
  Vector<int> v; // default vector : origin (0,0,0)

  // input coordinates
  std::cin >> v;
  std::cout << v;

  // parameterized constructor
  Vector<double> d(14.444,15,2323);

  // assignment
  Vector<double> e = d;
  Vector<double> f(d);

  v++; // post increment
  v--; // post decrement

  // utilites
  int xCoordinate = v.GetX();
  int yCoordinate = v.GetY();
  int zCoordinate = v.GetZ();

  Vector<int> v1(14,14.232,44);
  Vector<int> v2(11,112,10);

  // compound assignment
  v1 += v2;
  v1 -= v2;
  v1 *= v2;

  v1.Print(); // NOTE : i recommend using cout << v1 <<; instead
  return 0;
}
