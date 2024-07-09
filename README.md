## Vector

- library to play with [vectors](<https://en.wikipedia.org/wiki/Vector_(mathematics_and_physics)>) (physics/maths).
- just me playing around with c++, oops and testing my knowledge.
  > NOTE : i developed this as a learning and would not use it in production just yet. just play with it, solve your questions from your school, or make something crazy! i would appriciate it a lot! Please do NOT confuse with `Vector` and C++ `vectors` STL!

## Why?

i don't know! i did a course on object-oriented programming in c++ last sem. i think its a good time to brush up my knowledge of oops, templates, friend functions and operator overloading.

## Learning Objectives

- the big-5
- operator overloading
- templates
- friend functions
- makefiles
- neovim (becuase i am getting into it! really! i don't know why??)

## Usage

it's really simple, init Vectors, manipluate using operators(+,-,\*,+=,etc), find dot product, cross product and you have the super power. build anything you want. just do it. [click here](https://github.com/MahendraDani/vector/tree/main/src/examples) to see all examples.

### init vectors

```C++
#include<iostream>
#include "vector.h"
int main(){
  Vector<float> o; // Origin : (0,0,0)
  Vector<int> v(13,14,25);
  return 0;
}
```

### input and logging

you can directly use any Vector using `cout` and `cin` operator. it's that simple. no more hassle;

```C++
#include<iostream>
#include "vector.h"

int main(){
  Vector<int> v;
  std::cin >> v; // input coordinates

  std::cout << v;
  return 0;
}
```

alternatively you can also use `v.Print()` method, which works the same. but i would recommend to use as shown above instead. find more examples [here](/src/examples/init/)

## Basic operations

support is provided for all basic operations associated with vectors.

```C++
#include<iostream>
#include "vector.h"

int main(){
  Vector<int> a(1,3,5);
  ++a; // pre-increment
  Vector<int> b = a; // assignment;

  Vector<int> c = a--; // post decrement
  std::cout << c << std::endl; // what will be the output?
  return 0;
}
```

find more examples [here](/src/examples/init)

### Magnitude

- calculates the [magnitude](<https://en.wikipedia.org/wiki/Magnitude_(mathematics)>) of a vector.
- always returns the magnitude as `double`.

```C++
#include<iostream>
#include "vector.h"

int main(){
  Vector<int> a(1,3,5);
  double magnitude = a.Magnitude();
  std::cout << magnitude << std::endl; //5.9160
  return 0;
}
```

### Vector addtion

performs [addition of two vectors](https://mathworld.wolfram.com/VectorAddition.html) and returns the resultant vector;

![vector addition](/public/addition.png)

```C++
#include<iostream>
#include "vector.h"

int main(){
  Vector<int> a(1,3,5);
  Vector<int> b(12,4,5);

  Vector<int> c = a + b; // vector addition
  std::cout << c << std::endl; // (13,7,10)
  return 0;
}
```

### Vector subtraction

performs vector subtraction of two vectors and returns the resultant vectors
![vector subtraction](/public/subtraction.png)

```C++
#include<iostream>
#include "vector.h"

int main(){
  Vector<int> a(1,3,5);
  Vector<int> b(12,4,5);

  Vector<int> c = a - b; // vector addition
  std::cout << c << std::endl; // (-11,-1,0)
  return 0;
}
```

## Advanced usage

distane between two points, dot product, cross product, array of vectors.... and the list goes on.

### Dot product

- caculates the magnitude of [dot product](https://byjus.com/maths/dot-product-of-two-vectors/) of two vectors.
- this method always returns the output as `double`.

```C++
#include<iostream>
#include "vector.h"

int main(){
  Vector<int> a(1,3,5);
  Vector<int> b(12,4,5);

  double dotProduct = DotProduct(a,b);
  std::cout << dotProduct <<std::endl;
  return 0;
}
```

### Cross Product

calculates the [cross product](https://byjus.com/maths/cross-product/) of two vectors and returns the resultant vector.
![cross product](/public/cross-product.png)

```C++
#include<iostream>
#include "vector.h"

int main(){
  Vector<int> a(1,3,5);
  Vector<int> b(12,4,5);

  Vector<int> crossProduct = CrossProduct(a,b);
  std::cout << crossProduct <<std::endl;
  return 0;
}
```

## Array of multiple vectors

you can do anything you want with vectors, let's see how to make an array of vectors

```C++
#include<iostream>
#include "vector.h"

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
```

## Todo

create a library to perform operations on Vectors (2D/3D). yup. that's it. nothing new!

- [x] create 2D/3D templae Vectors class of type int, bytes, float, double
- [x] default,parametarized and copy constructors
- [x] pre and post increment operator overloading
- [x] compound assignment operators(-=, +=) operator overloadin
- [x] addition operator overloading : add two or more Vectors
- [x] subratction operator overloading: subtract two or more Vectors
- [x] distance between two Vectors - friend functions
- [x] compound assignment operator(\*=) overloading
- [x] multiplication operator overloading
- [x] magnitude of a vector
- [x] dot product
- [x] cross product
- [x] cout and cin operator overloading
- [x] update readme with usage examples (add references wherever needed)
- [x] create a src/examples directory for examlples showcasing usage of the library
- [ ] create a command in make file to run any test
- [ ] add tests for all methods

## References

1. [why template classes def and implementation can't be seperated](https://isocpp.org/wiki/faq/templates#templates-defn-vs-decl)
2. [Object oriented programming by Robert Lafore 4th edition](https://www.amazon.in/Object-Oriented-Programming-Kaleidoscope-Robert-Lafore/dp/0672323087)
3. [Caltech C++ operator overloading guidelines](http://courses.cms.caltech.edu/cs11/material/cpp/donnie/cpp-ops.html)
