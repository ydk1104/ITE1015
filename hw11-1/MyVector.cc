#include"MyVector.h"

MyVector::MyVector():len(0),arr(NULL){}
MyVector::MyVector(int num):len(num){
	arr = new int[num];
}
MyVector::~MyVector(){delete[] arr;}
MyVector MyVector::operator +(const MyVector &a){
	MyVector temp(len);
	for(int i=0; i<len; i++){
		temp.arr[i] = arr[i] + a.arr[i];
	}
	return temp;
}
MyVector MyVector::operator -(const MyVector &a){
	MyVector temp(len);
	for(int i=0; i<len; i++){
		temp.arr[i] = arr[i] - a.arr[i];
	}
	return temp;
}
MyVector MyVector::operator +(const int a){
	MyVector temp(len);
	for(int i=0; i<len; i++){
		temp.arr[i] = arr[i] + a;
	}
	return temp;
}
MyVector MyVector::operator -(const int a){
	MyVector temp(len);
	for(int i=0; i<len; i++){
		temp.arr[i] = arr[i] - a;
	}
	return temp;
}
std::ostream& operator <<(std::ostream& out, const MyVector& b){
	for(int i=0; i<b.len; i++){
		std::cout << b.arr[i] << ' ';
	}
	std::cout << '\n';
	return out;
}
std::istream& operator >>(std::istream& in, MyVector& b){
	for(int i=0; i<b.len; i++){
		std::cin >> b.arr[i];
	}
	return in;
}
