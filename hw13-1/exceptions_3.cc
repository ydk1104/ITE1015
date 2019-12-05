#include<iostream>
#include<string>

class A
{
public:
	char type;
	A():type('A'){}
	A(char x):type(x){}
};
class B : public A
{
public:
	B():A('B'){}
	B(char x):A(x){}
};
class C : public B
{
public:
	C():B('C'){}
};
  
int main(){
	int n;
	std::cout << "input num(0~2):";
	std::cin >> n;	
	
	try{
		if(n == 0)
			throw new A;
		else if(n == 1)	
			throw new B;
		else if (n ==2)
			throw new C;
		else
			throw std::string("invalid input");
	}
	//implement here
	catch(A* x){
		std::cout << "throw new " << x->type << " has been called\n";
		delete x;
	}
	catch(std::string s){
		std::cout << s << '\n';
	}
	return 0;
}

