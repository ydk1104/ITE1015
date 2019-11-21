#include<iostream>
#include<string>
#include"MyVector.h"

int task(){
		int num;
		std::cin >> num;
		MyVector a(num), b(num);
		MyVector* ptr[2] = {&a, &b};
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
				if(oper == '+' && operand <= '9' ) std::cout << *ptr[input[0]-'a'] + (operand-'0');
				else if(oper == '+' && operand >= 'a') std::cout << *ptr[input[0]-'a'] + *ptr[operand-'a'];
				else if(oper == '-' && operand <= '9') std::cout << *ptr[input[0]-'a'] + (operand-'0');
				else if(oper == '-' && operand >= 'a') std::cout << *ptr[input[0]-'a'] + *ptr[operand-'a'];

			}
		}while(1);
}

int main(void){
	std::string input;
	MyVector* ptr[2];
	while(input != "quit"){
		if(input == "new" && task()) break;
		if(!(std::cin >> input)) break;
	}
}

