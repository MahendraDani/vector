#pragma once


class Point{
  private:
    int x;
    int y;
    int z;

  public:
    Point();
    Point(int x, int y);
    Point(int x, int y, int z);
    Point(Point& other);
    
    void Print();

};
