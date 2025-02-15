#include<iostream>

template<typename T>
void myswap(T& a, T& b){
	T temp = a;
	a = b;
	b = temp;
}

using namespace std;

int main(void){
	int a = 3, b = 1;	
	myswap(a, b);
	cout << "a= " << a << " b= " << b << endl;//1, 3
	
	float c = 3.1f, d = 1.5f;	
	myswap(c, d);
	cout << "c= " << c << " d= " << d << endl;//1.5, 3.1
	
	return 1;
}
