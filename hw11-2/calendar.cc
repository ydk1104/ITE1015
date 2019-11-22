#include"calendar.h"

Date::Date():year_(0),month_(0),day_(0){}
Date::Date(int year, int month, int day):year_(year), month_(month), day_(day){}

int Date::GetDaysInYear(int year){
	if(year%4) return 365;
	if(year%100) return 366;
	if(year%400) return 365;
	return 366;
}
int Date::GetDaysInMonths(int year, int months){
	int months_[13] = {0, 31, 28, 31, 30, 31, 30,
					      31, 31, 30, 31, 30, 31, };
	return months_[months] + (months == 2 && GetDaysInYear(year)==366);
}
int Date::ComputeDaysFromYearStart(int year, int month, int day){
	int cnt=0;
	for(int i=1; i<month; i++) cnt += GetDaysInMonths(year, i);
	return cnt + day;
}
void Date::NextDay(int n){
	if(n < 0){
		n += ComputeDaysFromYearStart(year_, month_, day_);
		month_ = 1;
		day_ = 1;
		while(n<0){
			n += GetDaysInYear(--year_);
		}
	}
	if(n > GetDaysInYear(year_) - ComputeDaysFromYearStart(year_, month_, day_)){
		n -= GetDaysInYear(year_) - ComputeDaysFromYearStart(year_, month_, day_);
		while(n>GetDaysInYear(year_)) n -= GetDaysInYear(year_++);
	}
	day_ += n;
	while(day_ > GetDaysInMonths(year_, month_)) day_ -= GetDaysInMonths(year_, month_++), month_>12?month_=1&&(year_++):1;
	std::cout << *this;
}
void Date::SetDate(int year, int month, int day){
	if(month < 1 || month > 12 || day > GetDaysInMonths(year, month)){
		std::cout << "Invalid date: " << year << '.' << month << '.' << day << '\n';
	}
	else{
		year_ = year;
		month_ = month;
		day_ = day;
		//or *this = Date(year, month, day); // maybe?
		std::cout << *this;
	}
}

std::ostream& operator<<(std::ostream& os, const Date& c){
	struct Hacker{int year,month,day;}const &hacker = reinterpret_cast<const Hacker&>(c);
	std::cout << hacker.year << '.' << hacker.month << '.' << hacker.day << '\n';
}
std::istream& operator>>(std::istream& is, Date& c){
	int year, month, day;
	char buff;
	std::cin >> year >> buff >> month >> buff >> day;
	c.SetDate(year, month, day);
}
