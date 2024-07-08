# Questions and Answer
just some questions that come to my mind while writing code, their answers and how i found them.

## 1. Return type of binary operator overloading
what should be the return type of binary operator overloading? a new instance of class which can be assgined to result instance `Point<T> Point::operator+(Point<T>& other)` ? or a reference to result instance from method implementation `Point<T>& Point::operator+(Point<T> & other)`?

1. for assigment operator(=) return a reference and takes const reference as parameter since we need not change the value that's provided (Point q = p), `p` should be passed as `const` reference

2. the + operator returns a const instance, not a const reference. always use compound assignment operatos to implement binary overloaded operators.

[Caltech C++ operator overloading guidelines](http://courses.cms.caltech.edu/cs11/material/cpp/donnie/cpp-ops.html)


- When overloading the addition operator (+), it is common practice to return a new instance of the class rather than a pointer or reference. This approach ensures that the result of the addition is a distinct, independent object, which aligns with the expected behavior of the + operator in C++. (chatgpt)

