#ifndef shapes_h
#define shapes_h

class Shape{
	public:
		Shape(double, double);
		virtual double getArea() = 0;
		virtual ~Shape();
	protected:
		double width, height;
};

class Triangle:public Shape{
	public:
		Triangle(double, double);
		virtual double getArea();
};

class Rectangle:public Shape{
	public:
		Rectangle(double, double);
		virtual double getArea();
};

#endif
