#include<iostream>
#include<string>

struct Person{
	std::string name;
	int age;
	void __init__(){
		std::cin >> name >> age;
	}
	void __print__(){
		std::cout << "Name:" << name << ", Age:" << age << '\n';
	}
};

int main(void){
	int N;
	std::cin >> N;
	Person* a = new Person[N];
	for(int i=0; i<N; i++) a[i].__init__();
	for(int i=0; i<N; i++) a[i].__print__();
	delete[] a;
}
