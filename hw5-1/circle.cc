#include<stdio.h>
#include"circle.h"

#ifndef pi
#define pi 3.141592
#endif

#ifndef getCircle
#define getCircle

double getCirclePerimeter(double r){
	return 2*r*pi;
}

double getCircleArea(double r){
	return r*r*pi;
}
#endif
