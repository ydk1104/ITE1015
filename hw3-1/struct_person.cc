#include<iostream>

struct Person{
	char name[10];
	int age;
};

int main(){
	Person x;
	std::cin >> x.name >> x.age;
	std::cout << "name: " << x.name << '\n'
	 	<< "age: " << x.age << '\n';
}
