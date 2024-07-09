#pragma once

#include<cmath>

template<typename T>
class Point{
  private:
    T x;
    T y;
    T z;

  public:
    Point();
    Point(T x, T y);
    Point(T x, T y, T z);
    Point(const Point& other);
    
    // overloaded operators
    Point<T>& operator++();
    Point<T>& operator++(T);

    Point<T>& operator--();
    Point<T>& operator--(T);

    Point<T>& operator=(const Point<T>& other);

    Point<T>& operator+=(const Point<T>& other);
    Point<T>& operator-=(const Point<T>& other);
    Point<T>& operator*=(const Point<T>& other);
    
    const Point<T> operator+(const Point<T>& other) const;
    const Point<T> operator-(const Point<T>& other) const;
    const Point<T> operator*(const Point<T>& other) const;

    template<typename U>
    friend double Distance(const Point<U>& p1,const Point<U>& p2);

    void Print();
    T GetX();
    T GetY();
    T GetZ();

    double Magnitude();
};

template<typename T>
Point<T>::Point():x(0),y(0),z(0){};

template<typename T>
Point<T>::Point(T x, T y) {
    this->x = x;
    this->y = y;
    this->z = 0;
}

template<typename T>
Point<T>::Point(T x, T y, T z){
    this->x = x;
    this->y = y;
    this->z = z;
}

template<typename T>
Point<T>::Point(const Point& other){
  this->x = other.x;
  this->y = other.y;
  this->z = other.z;
}

// NOTE : pre and post increment/decrement operators will increment all the coordinates, use it carefully for 2D points!
template<typename T>
Point<T>& Point<T>::operator++(){
  ++x;
  ++y;
  ++z;
  return *this;
}

template<typename T>
Point<T>& Point<T>::operator++(T){
  x++;
  y++;
  z++;
  return *this;
}

template<typename T>
Point<T>& Point<T>::operator--(){
  --x;
  --y;
  --z;
  return *this;
}

template<typename T>
Point<T>& Point<T>::operator--(T){
  x--;
  y--;
  z--;
  return *this;
}

template<typename T>
Point<T>& Point<T>::operator=(const Point<T>& other){
  // check for self assignemnt : http://courses.cms.caltech.edu/cs11/material/cpp/donnie/cpp-ops.html
  if(this == &other){
    return *this;
  }
  x = other.x;
  y = other.y;
  z = other.z;
  return *this;
}

template<typename T>
Point<T>& Point<T>::operator+=(const Point<T>& other){
  x +=other.x;
  y +=other.y;
  z +=other.z;
  return *this;
}

template<typename T>
Point<T>& Point<T>::operator-=(const Point<T>& other){
  x -= other.x;
  y -= other.y;
  z -= other.z;
  return *this;
}

template<typename T>
Point<T>& Point<T>::operator*=(const Point<T>& other){
  x *= other.x;
  y *= other.y;
  z *= other.z;
  return *this;
}

template<typename T>
const Point<T> Point<T>::operator+(const Point<T>& other) const{
  Point<T> result(other);
  result.x = x + other.x;
  result.y = y + other.y;
  result.z = z + other.z;
  return result;
}

template<typename T>
const Point<T> Point<T>::operator-(const Point<T>& other) const{
  Point<T> result(other);
  result.x = x - other.x;
  result.y = y - other.y;
  result.z = z - other.z;
  return result;
}

template<typename T>
const Point<T> Point<T>::operator*(const Point<T>& other) const {
  Point<T> result(other);
  result.x = x * other.x;
  result.y = y * other.y;
  result.z = z * other.z;
  return result;
}

template<typename U>
double Distance(const Point<U>& p1, const Point<U>& p2){
  double ans = (double)std::sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) + (p1.z-p2.z)*(p1.z-p2.z));
  return ans;
}

template<typename T>
T Point<T>::GetX(){
  return x;
}

template<typename T>
T Point<T>::GetY(){
  return y;
}

template<typename T>
T Point<T>::GetZ(){
  return z;
}

template<typename T>
double Point<T>::Magnitude(){
  return (double)std::sqrt(std::pow(x,2) + std::pow(y,2) + std::pow(z,2));
}

template<typename T>
void Point<T>::Print(){
  std::cout << "(" << x << "," << y << "," << z << ")" << "\n";}
