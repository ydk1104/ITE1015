#include"reply_admin.h"
#include<iostream>
#include<algorithm>

ReplyAdmin::ReplyAdmin(){
	chats = new std::string[NUM_OF_CHAT];
	count = 0;
}

ReplyAdmin::~ReplyAdmin(){
	delete[] chats;
}

int ReplyAdmin::getChatCount(){return count;}
bool ReplyAdmin::addChat(std::string _chat){
		if(getChatCount() >= NUM_OF_CHAT) return false;
		chats[count++] = _chat;
		return true;
}
bool ReplyAdmin::removeChat(int _index){
		if(getChatCount() <= _index || _index < 0) return false;
		count--;
		for(int i=_index; i<getChatCount(); i++){
			chats[i] = chats[i+1];
		}
		return true;
}
bool ReplyAdmin::removeChat(int _start, int _end){
		if(getChatCount() <= _start || _end < 0) return false;
		_start = std::max(0, _start);
		_end = std::min(getChatCount()-1, _end);
		count -= _end - _start + 1;
		for(int i=_start; i<getChatCount(); i++){
			chats[i] = chats[i+_end-_start+1];
		}
		return true;
}
std::ostream& operator <<(std::ostream& os, ReplyAdmin& x){
	for(int i=0; i<x.getChatCount(); i++){
		std::cout << i << ' ' << x.chats[i] << '\n';	
	}
}
