#include<iostream>

typedef struct{
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point *p){
	std::cout << "Calling getScale2xPoint()\n";
	return {p->xpos*2, p->ypos*2};
}

void swapPoint(Point& p1, Point& p2){
	std::cout << "Calling swapPoint\n";
	Point temp = p1;
	p1 = p2;
	p2 = temp;
}

void printPoint(Point &p1, Point &p2){
	std::cout << "P1 : " << p1.xpos << ' ' << p1.ypos << '\n';
	std::cout << "P2 : " << p2.xpos << ' ' << p2.ypos << '\n';
}

int main(void){
	Point p1;
	std::cin >> p1.xpos >> p1.ypos;
	Point p2 = getScale2xPoint(&p1);
	printPoint(p1, p2);
	swapPoint(p1, p2);
	printPoint(p1, p2);
}
