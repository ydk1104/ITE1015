#ifndef World_Clock_h
#define World_Clock_h

#include<iostream>
class WorldClock {
public:
	void Tick(int seconds);
	void SetTime(int hour, int minute, int second); 

private:
	int timezone = 0; // 초 정보만 저장하고 시, 분을 계산 (예: 10000초 = 2 시간 46 분 40 초).
	const int TIME_MAX = 86400;
};

std::ostream& operator<<(std::ostream& os, const WorldClock& c);

std::istream& operator>>(std::istream& is, WorldClock& c);

#endif
