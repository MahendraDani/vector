#pragma once

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
    Point(Point& other);
    
    void Print();

    // overloaded operators
    Point& operator++();
    Point& operator++(T);

    Point& operator--();
    Point& operator--(T);

    Point operator=(const Point& other);

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
Point<T>::Point(Point& other){
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
Point<T> Point<T>::operator=(const Point<T>& other){
  // check for self assignemnt : http://courses.cms.caltech.edu/cs11/material/cpp/donnie/cpp-ops.html
  if(this == &other){
    return *this;
  }
  this->x = other.x;
  this->y = other.y;
  this->z = other.z;
  return *this;
}

template<typename T>
void Point<T>::Print(){
  std::cout << "(" << x << "," << y << "," << z << ")" << "\n";}
