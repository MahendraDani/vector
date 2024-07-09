#pragma once

#include<cmath>
#include<iostream>

template<typename T>
class Vector{
  private:
    T x;
    T y;
    T z;

  public:
    Vector();
    Vector(T x, T y);
    Vector(T x, T y, T z);
    Vector(const Vector& other);
    
    // overloaded operators
    Vector<T>& operator++();
    Vector<T>& operator++(T);

    Vector<T>& operator--();
    Vector<T>& operator--(T);

    Vector<T>& operator=(const Vector<T>& other);

    Vector<T>& operator+=(const Vector<T>& other);
    Vector<T>& operator-=(const Vector<T>& other);
    Vector<T>& operator*=(const Vector<T>& other);
    
    const Vector<T> operator+(const Vector<T>& other) const;
    const Vector<T> operator-(const Vector<T>& other) const;
    const Vector<T> operator*(const Vector<T>& other) const;

    template<typename U>
    friend double Distance(const Vector<U>& p1,const Vector<U>& p2);

    template<typename U>
    friend std::ostream& operator<<(std::ostream& out, const Vector<U>& p);

    template<typename U>
    friend std::istream& operator>>(std::istream& out, Vector<U>& p);

    // class methods
    void Print(); // NOTE: i recommend using cout instead of Print method

    T GetX();
    T GetY();
    T GetZ();

    double Magnitude();

    template<typename U>
    friend double DotProduct(const Vector<U>& p1, const Vector<U>& p2);

    template<typename U>
    friend Vector<U> CrossProduct(const Vector<U>& p1, const Vector<U>& p2);
};

template<typename T>
Vector<T>::Vector():x(0),y(0),z(0){};

template<typename T>
Vector<T>::Vector(T x, T y) {
    this->x = x;
    this->y = y;
    this->z = 0;
}

template<typename T>
Vector<T>::Vector(T x, T y, T z){
    this->x = x;
    this->y = y;
    this->z = z;
}

template<typename T>
Vector<T>::Vector(const Vector& other){
  this->x = other.x;
  this->y = other.y;
  this->z = other.z;
}

// NOTE : pre and post increment/decrement operators will increment all the coordinates, use it carefully for 2D Vectors!
template<typename T>
Vector<T>& Vector<T>::operator++(){
  ++x;
  ++y;
  ++z;
  return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator++(T){
  x++;
  y++;
  z++;
  return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator--(){
  --x;
  --y;
  --z;
  return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator--(T){
  x--;
  y--;
  z--;
  return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other){
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
Vector<T>& Vector<T>::operator+=(const Vector<T>& other){
  x +=other.x;
  y +=other.y;
  z +=other.z;
  return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator-=(const Vector<T>& other){
  x -= other.x;
  y -= other.y;
  z -= other.z;
  return *this;
}

template<typename T>
Vector<T>& Vector<T>::operator*=(const Vector<T>& other){
  x *= other.x;
  y *= other.y;
  z *= other.z;
  return *this;
}

template<typename T>
const Vector<T> Vector<T>::operator+(const Vector<T>& other) const{
  Vector<T> result(other);
  result.x = x + other.x;
  result.y = y + other.y;
  result.z = z + other.z;
  return result;
}

template<typename T>
const Vector<T> Vector<T>::operator-(const Vector<T>& other) const{
  Vector<T> result(other);
  result.x = x - other.x;
  result.y = y - other.y;
  result.z = z - other.z;
  return result;
}

template<typename T>
const Vector<T> Vector<T>::operator*(const Vector<T>& other) const {
  Vector<T> result(other);
  result.x = x * other.x;
  result.y = y * other.y;
  result.z = z * other.z;
  return result;
}

template<typename U>
double Distance(const Vector<U>& p1, const Vector<U>& p2){
  double ans = (double)std::sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) + (p1.z-p2.z)*(p1.z-p2.z));
  return ans;
}

template<typename U>
std::ostream& operator<<(std::ostream& out, const Vector<U>& p) {
    out << "(" << p.x << "," << p.y << "," << p.z << ")";
    return out;
}

template<typename U>
std::istream& operator>>(std::istream& in, Vector<U>& p){
  std::cout << "x: ";
  in >> p.x;
  std::cout << "y: ";
  in >> p.y;
  std::cout << "z: ";
  in >> p.z;
    return in;
}

template<typename T>
T Vector<T>::GetX(){
  return x;
}

template<typename T>
T Vector<T>::GetY(){
  return y;
}

template<typename T>
T Vector<T>::GetZ(){
  return z;
}

template<typename T>
double Vector<T>::Magnitude(){
  return (double)std::sqrt(std::pow(x,2) + std::pow(y,2) + std::pow(z,2));
}

template<typename U>
double DotProduct(const Vector<U>&p1, const Vector<U>& p2){
  Vector<U> temp = p1*p2;
  return (double)(temp.x + temp.y + temp.z);
}

template<typename U>
Vector<U> CrossProduct(const Vector<U>& p1, const Vector<U>& p2){
  Vector<U> crossProduct;
  crossProduct.x = p1.y*p2.z - p1.z*p2.y;
  crossProduct.y = -(p1.x*p2.z -p1.z*p2.x);
  crossProduct.z = p1.x*p2.y - p1.y*p2.x;
  return crossProduct;
}

template<typename T>
void Vector<T>::Print(){
  std::cout << "(" << x << "," << y << "," << z << ")" << "\n";
}
