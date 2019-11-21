#ifndef MyVector_h
#define MyVector_h

#include<iostream>
class MyVector
{
private:
	int len;
	int* arr;
public:
//Constructor, Destructor
	MyVector();
	MyVector(int);
	~MyVector();
	MyVector operator+(const MyVector & a);
	MyVector operator-(const MyVector & a);
	MyVector operator+(const int a);
	MyVector operator-(const int a);
	friend std::ostream& operator << (std::ostream& out, const MyVector& b);
	friend std::istream& operator >> (std::istream& in, MyVector& b);
};

#endif
