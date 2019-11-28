#include "MyVector.h"
#include "MyContainer.cc"
#include <iostream>

template <typename T>
MyVector<T>::MyVector()
	:MyContainer<T>(),capacity(0)
{
}

template <typename T>
MyVector<T>::MyVector(int n)
	:MyContainer<T>(n),capacity(n)
{
}

template <typename T>
MyVector<T>::MyVector(T* arr, int n)
	:MyContainer<T>(arr, n),capacity(n)
{
}

template <typename T>
bool MyVector<T>::empty()
{
	return !this->n_ele;
}

template <typename T>
int MyVector<T>::size()const
{
	return this->n_ele;
}

template <typename T>
int MyVector<T>::max_size()
{
	return capacity;
}

template <typename T>
void MyVector<T>::reserve(int new_cap)
{
	T* arr = new T[new_cap];
	
	for(int i=0; i<this->n_ele; i++) arr[i] = this->obj_arr[i];

	delete this->obj_arr;
	this->obj_arr = arr;
	capacity = new_cap;
}

template <typename T>
void MyVector<T>::push_back(T obj)
{
	if(this->n_ele == capacity) reserve(capacity*2+1);
	this->obj_arr[this->n_ele++] = obj;
}

template <typename T>
void MyVector<T>::pop_back()
{
	this->n_ele--;
}

template <typename T>
T& MyVector<T>::front()
{
	if(empty()){
		std::cout << "No element" << std::endl;
		exit(1);
	}
	return this->obj_arr[0];
}

template <typename T>
T& MyVector<T>::back()
{
	if(empty()){
		std::cout << "No element" << std::endl;
		exit(1);
	}
	return this->obj_arr[this->n_ele-1];
}
	
template <typename T>
T& MyVector<T>::at(int idx)
{
	if(idx >= this->n_ele || idx < 0){
		std::cout << "out of index" << std::endl;
		exit(1);
	}
	return this->obj_arr[idx];
}

template <typename T>
T& MyVector<T>::operator[](const int& i)const
{
	return this->obj_arr[i];
}

template <typename T>
MyVector<T> MyVector<T>::operator+(const MyVector<T>& rhs)
{
	MyVector<T> temp = *this;
	for(int i=0; i<rhs.size(); i++) temp.push_back(rhs[i]);
	return temp;
}
