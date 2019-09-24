#include<iostream>

typedef struct{
	double x;
	double y;
}Point;

typedef struct{
	char name[7];
	Point points[3];
}Person;

bool operator <(Point &x, Point &y){
	return (x.x*x.x + x.y*x.y) < (y.x*y.x + y.y*y.y);
}

std::ostream& operator <<(std::ostream& outputStream, const Point &x){
	std::cout << " (" << x.x << ", " << x.y << ")\n";
	return outputStream;
}

int main(void){
	Person students[3];
	Point maxPoints[3] = {0,};
	for(int i=0; i<3; i++){
		std::cin >> students[i].name;
		for(int j=0; j<3; j++){
			std::cin >> students[i].points[j].x >> students[i].points[j].y;
			if(maxPoints[i] < students[i].points[j]) maxPoints[i] = students[i].points[j];
		}
	}
	for(int i=0; i<3; i++)
		std::cout << students[i].name << maxPoints[i];
}
