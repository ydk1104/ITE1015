#include"string.h"

MyString::MyString():len(0),a(NULL){};
MyString::MyString(int len):len(len){
	a = new char[len];
}
MyString::~MyString(){delete[] a;}

MyString MyString::operator +(const MyString& a){
	MyString temp(len+a.len);
	for(int i=0; i<len; i++) temp.a[i] = this->a[i];
	for(int i=0; i<a.len; i++) temp.a[i+len] = a.a[i];
	return temp;
}
MyString MyString::operator *(const int a){
	MyString temp(len*a);
	for(int i=0; i<temp.len; i++) temp.a[i] = this->a[i%len];
	return temp;
}
std::ostream& operator <<(std::ostream& out, const MyString& b){
	for(int i=0; i<b.len; i++) std::cout << b.a[i];
	std::cout << std::endl;
	return out;
}
std::istream& operator >>(std::istream& in, MyString& b){
	char temp[1024];
	in >> temp;
	while(temp[b.len]) b.len++;
	b.a = new char[b.len];
	for(int i=0; i<b.len; i++) b.a[i] = temp[i];
	return in;
}
