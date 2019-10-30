#include<iostream>
#include<string>
#include<map>
#include"message_book.h"

int main(void){
		std::string type;
		MessageBook message;
		while(type != "quit"){
			if(type == "add"){
				int number; std::string msg;
				std::cin >> number;
				std::getchar();
				std::getline(std::cin, msg);
				message.AddMessage(number, msg);
			}
			else if(type == "delete"){
				int number;
				std::cin >> number;
				message.DeleteMessage(number);
			}
			else if(type == "print"){
				int number;
				std::cin >> number;
				std::cout << message.GetMessage(number) << '\n';
			}
			else if(type == "list"){message.print();}
			std::cin >> type;
		}
}
