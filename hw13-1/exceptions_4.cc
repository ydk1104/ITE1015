#include<iostream>

class A{
	public:
		A(){
			std::cout << "A() called\n";
		}
		~A(){
			std::cout << "~A() called\n";
		}
		A(const A&){
			std::cout << "A(A&) called\n";
		}
};

int main() {
	try{
		try{
			A a;
			throw a;
		}
		catch(A &a)
		{
			#if 0//rethrow, 아래 throw twice구문도 실행시켜 볼  것
				std::cout << "rethrow" << std::endl;
				throw;
			#else//throw twice
				std::cout << "throw twice" << std::endl;
				throw a;
			#endif
		}
	}	
	catch(A &a)
	{
			std::cout << "exception handled" << std::endl;
	}
	
	return 0;
}

