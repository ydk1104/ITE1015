#include<iostream>

class A
{
};
class B : public A
{
};
class C : public B
{
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
	catch(C*){
		std::cout << "throw new C has been called\n";
	}
	catch(B*){
		std::cout << "throw new B has been called\n";
	}
	catch(A*){
		std::cout << "throw new A has been called\n";
	}
	catch(std::string s){
		std::cout << s << '\n';
	}
	return 0;
}

