#include<iostream>

class circle{
	private:
		double x,y,r, PI=3.14f;
	public:
		void input();
		double area();
		double perimeter();
};
class rectangle{
	private:
		double x1,y1,x2,y2;
	public:
		void input();
		double area();
		double perimeter();
};
