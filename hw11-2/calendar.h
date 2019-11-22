#ifndef calendar_h
#define calendar_h
#include<iostream>

class Date {
public:
	Date();
	Date(int year, int month, int day);

	void NextDay(int n);
	void SetDate(int year, int month, int day);

private:
// 윤년을 판단하여 주어진 연도에 해당하는 날짜 수(365 또는 366)를 리턴.
// 2월을 29일로 둔 해를 윤년이라고 함
	static int GetDaysInYear(int year);
// 해당 날짜가 해당 연도의 처음(1월 1일)부터 며칠째인지를 계산.
	static int ComputeDaysFromYearStart(int year, int month, int day);
	static int GetDaysInMonths(int year, int months);
	int year_, month_, day_;
};

std::ostream& operator<<(std::ostream& os, const Date& c);
std::istream& operator>>(std::istream& is, Date& c);

#endif
