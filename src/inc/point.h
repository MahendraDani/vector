#pragma once

#include<cmath>
#include<iostream>

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

    template<typename U>
    friend std::ostream& operator<<(std::ostream& out, const Point<U>& p);

    template<typename U>
    friend std::istream& operator>>(std::istream& out, Point<U>& p);

    // class methods
    void Print(); // NOTE: i recommend using cout instead of Print method

    T GetX();
    T GetY();
    T GetZ();

    double Magnitude();

    template<typename U>
    friend double DotProduct(const Point<U>& p1, const Point<U>& p2);

    template<typename U>
    friend Point<U> CrossProduct(const Point<U>& p1, const Point<U>& p2);
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

template<typename U>
std::ostream& operator<<(std::ostream& out, const Point<U>& p) {
    out << "(" << p.x << "," << p.y << "," << p.z << ")";
    return out;
}

template<typename U>
std::istream& operator>>(std::istream& in, Point<U>& p){
  std::cout << "x: ";
  in >> p.x;
  std::cout << "y: ";
  in >> p.y;
  std::cout << "z: ";
  in >> p.z;
    return in;
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

template<typename U>
double DotProduct(const Point<U>&p1, const Point<U>& p2){
  Point<U> temp = p1*p2;
  return (double)(temp.x + temp.y + temp.z);
}

template<typename U>
Point<U> CrossProduct(const Point<U>& p1, const Point<U>& p2){
  Point<U> crossProduct;
  crossProduct.x = p1.y*p2.z - p1.z*p2.y;
  crossProduct.y = -(p1.x*p2.z -p1.z*p2.x);
  crossProduct.z = p1.x*p2.y - p1.y*p2.x;
  return crossProduct;
}
template<typename T>
void Point<T>::Print(){
  std::cout << "(" << x << "," << y << "," << z << ")" << "\n";}
