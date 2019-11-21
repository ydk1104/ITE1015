#include<iostream>
#include<string>
#include"string.h"

int task(){
		MyString a, b;
		MyString* ptr[2] = {&a, &b};
		for(int i=0; i<2; i++){
			std::cout << "enter " << char('a'+i) << '\n';
			std::cin >> *ptr[i];
		}
		std::string input;
		do{
			if(!(std::cin>>input)) return 1;
			if(input == "quit") return 1;
			if(input == "new") return task();
			if(input == "a" || input == "b"){
				char oper, operand;
				std::cin >> oper >> operand;
				if(oper == '+') std::cout << *ptr[input[0]-'a'] + *ptr[operand-'a'];
				else if(oper == '*') std::cout << *ptr[input[0]-'a'] * (operand-'0');
			}
		}while(1);
}

int main(void){
	std::string input;
	while(input != "quit"){
		if(input == "new" && task()) break;
		if(!(std::cin >> input)) break;
	}
}
