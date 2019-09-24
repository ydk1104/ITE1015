#include<iostream>

struct complex{
	double a,b;
	complex(){
		std::cin >> a >> b;
	}
	complex(complex &x){
		a = x.a; b = x.b;
	}
	complex operator +=(complex &x){
		a+=x.a; b+=x.b;
		return *this;
	}
	complex operator *=(complex &x){
		int temp = a*x.b + b*x.a;
		a = a*x.a - b*x.b;
		b = temp;
		return *this;
	}
};

void printComplex(complex &x){
	std::cout << x.a << " + " << x.b << "i\n";
}
void printAddComp(complex &x, complex &y){
	complex z(x);
	z+=y;
	printComplex(z);
}

void printMulComp(complex &x, complex &y){
	complex z(x);
	z*=y;
	printComplex(z);
}
int main(void){
	complex a,b;
	std::cout << "복소수1:\n"; printComplex(a);
	std::cout << "복소수2:\n"; printComplex(b);
	std::cout << "두 복소수의 합:\n"; printAddComp(a,b);
	std::cout << "두 복소수의 곱:\n"; printMulComp(a,b);
}
