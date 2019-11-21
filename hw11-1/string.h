#ifndef MyString_h
#define MyString_h

#include<iostream>
class MyString
{
private:
	int len;
	char* a;
public:
	//Constructor, Destructor
	MyString();
	MyString(int);
	~MyString();
	MyString operator+(const MyString& a);
	MyString operator*(const int a);
	friend std::ostream& operator << (std::ostream& out, const MyString& b);
	friend std::istream& operator >> (std::istream& in, MyString& b);
};

#endif
