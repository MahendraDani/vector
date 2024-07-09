#include<iostream>
#include "../../inc/vector.h"

int main(){
  Vector<int> vectors[5];

  for(int i=0;i<5;i++){
    Vector<int> temp(i,i,i);
    vectors[i] = temp;
  }

  // print all vectors
  for(auto x :vectors){
    std::cout << x << std::endl;
  }
  // OUTPUT
  /*
    (0,0,0)
    (1,1,1) 
    (2,2,2)
    (3,3,3)
    (4,4,4)
   */
  return 0;
}