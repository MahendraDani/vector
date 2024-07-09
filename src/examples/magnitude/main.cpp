#include<iostream>
#include "../../inc/vector.h"

int main(){
  Vector<float> a(1.4f,3.7f,5.7);
  double magnitude = a.Magnitude();
  std::cout << magnitude << std::endl;
}
