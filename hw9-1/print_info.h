#ifndef print_info
#define print_info
#include<string>

class A{
	public:
		virtual std::string getTypeInfo();
};
class B:public A{
	public:
		virtual std::string getTypeInfo();
};
class C:public B{
	public:
		virtual std::string getTypeInfo();
};

std::string printObjectTypeInfo1(A*);
std::string printObjectTypeInfo2(A& temp);

#endif
