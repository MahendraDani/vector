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

template<typename T>
void Point<T>::Print(){
  std::cout << "(" << x << "," << y << "," << z << ")" << "\n";}
