#include<iostream>

struct Person{
        char name[10];
        int age;
};

int main(){
	Person x[3];
	for(int i=0; i<3; i++){
		std::cin >> x[i].name >> x[i].age;
	}
	for(int i=0; i<3; i++){
		std::cout << "Name:" << (x+i)->name << ", Age:" << (x+i)->age << '\n';
	}
}
