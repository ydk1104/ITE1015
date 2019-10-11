#include<iostream>
#include<string>
#include"reply_admin.h"

bool getInputs(ReplyAdmin& admin){
	std::string inputs;
	getline(std::cin, inputs);
	if(inputs == "#quit") return false;
	if(inputs.find("#remove") == std::string::npos){
		admin.addChat(inputs);
	}
	else{
			int _index[3] = {0,}, check = 0;
			for(int i=8; inputs[i]; i++){
				if(inputs[i] == '-'){
					if(inputs[i-1] == '-') return true;
					check++;
				}
				else{
						_index[check] *= 10;
						_index[check] += inputs[i]-'0';
				}
			}
			if(check==3) return true;
			if(check==2) _index[check-1] *= -1;
			if(check) admin.removeChat(_index[check-1], _index[check]);
			else admin.removeChat(_index[0]);
	}
	std::cout << admin;
	return true;
}

int main(void){
	bool check = 1;
	ReplyAdmin admin;
	while(check){
		check = getInputs(admin);
	}
	return 0;
}
