#include<iostream>
#include<string>
#include<vector>
#include<map>
#include"message_book.h"

MessageBook::MessageBook() = default;
MessageBook::~MessageBook() = default;

void MessageBook::AddMessage(int number, const std::string& message){
	messages_[number] = message;
}

void MessageBook::DeleteMessage(int number){
	messages_.erase(number);
}

//std::vector<int> GetNumbers() const{}

const std::string& MessageBook::GetMessage(int number)const{
	std::map<int, std::string>::const_iterator it = messages_.find(number);
	if(it == messages_.end()){
			static std::string blank = std::string();
			return blank;
	}
	return it->second;
}

void MessageBook::print()const{
	for(const auto& i:messages_) std::cout << i.first << ": " << i.second << '\n';
}
