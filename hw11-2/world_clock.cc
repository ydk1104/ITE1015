#include"world_clock.h"

void WorldClock::Tick(int seconds){
	seconds %= TIME_MAX;
	timezone += seconds;
	while(timezone < 0) timezone += TIME_MAX;
	timezone %= TIME_MAX;
	std::cout << *this;
}
void WorldClock::SetTime(int hour, int minute, int second){
	int temp_minute = hour*60 + minute;
	int temp_second = temp_minute * 60 + second;
	if(temp_second > TIME_MAX || temp_second < 0){
		std::cout << "Invalid time: " << hour << ':' << minute << ':' << second << '\n';;
	}
	else timezone = temp_second, std::cout << *this;
}

std::ostream& operator <<(std::ostream& os, const WorldClock& c){
	struct Hacker { int number; const int MAX;} const &hacker = reinterpret_cast<const Hacker&>(c);
	std::cout << hacker.number/(60*60) << ':' << (hacker.number%3600)/(60) << ':' << hacker.number%60 << '\n';
}

std::istream& operator >>(std::istream& is, WorldClock& c){
	int hour, minute, second;
	char buff;
	std::cin >> hour >> buff >> minute >> buff >> second;
	c.SetTime(hour, minute, second);
}
