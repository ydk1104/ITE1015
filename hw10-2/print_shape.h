#ifndef print_shape_h
#define print_shape_h

#include<string>
#define PI 3.141592
class Shape{
	public:
		virtual double getArea() = 0;
		virtual double getPerimeter() = 0;
		virtual std::string getTypeString() = 0;
		virtual ~Shape();
};

class Circle:public Shape{
	public:
		Circle(double);
		virtual double getArea();
		virtual double getPerimeter();
		virtual std::string getTypeString();
	private:
		double radius;
};

class Rectangle:public Shape{
	public:
		Rectangle(double, double);
		virtual double getArea();
		virtual double getPerimeter();
		virtual std::string getTypeString();
	private:
		double width, height;
};

#endif
