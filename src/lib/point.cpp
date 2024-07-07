#include "../inc/point.h"
#include <iostream>


Point::Point():x(0),y(0),z(0){};

Point::Point(int x, int y) {
  this->x = x;
  this->y = y;
  this->z = 0;
}

Point::Point(int x, int y, int z){
  this->x = x;
  this->y = y;
  this->z = z;
}

Point::Point(Point& other){
  this->x = other.x;
  this->y = other.y;
  this->z = other.z;
}
void Point::Print(){
  std::cout << "(" << x << "," << y << "," << z << ")" << "\n";
}
