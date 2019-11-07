#ifndef print_member
#define print_member
#include<string>

class A{
	public:
		A(int);
		virtual void print();
		virtual ~A();
	private:
		int* memberA;
};

class B:public A{
	public:
		B(double);
		virtual void print();
		virtual ~B();
	private:
		double* memberB;
};

class C:public B{
	public:
		C(std::string);
		virtual void print();
		virtual ~C();
	private:
		std::string* memberC;
};

#endif
