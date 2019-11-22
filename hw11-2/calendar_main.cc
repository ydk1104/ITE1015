// calendar_main.cc
#include <iostream>
#include <string>
#include "calendar.h"

using namespace std;

int main() {
  Date date;
  while (true) {
	string str;
	cin >> str;
	if (str == "quit")
		break;
	if (str == "set")
		cin >> date;
	else if (str == "next_day") 
		date.NextDay(1);
 	 else if(str.substr(0, 5) == "next_"){
		int num = 0, idx = 5;
		bool minus = false;
		if(str[idx]=='-') minus = true, idx++;
		while(str[idx]) num *= 10, num += str[idx++]-'0';
		date.NextDay(num);
	 	}
	}
  return 0;
}

