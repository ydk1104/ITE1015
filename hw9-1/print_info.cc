#include"print_info.h"

std::string A::getTypeInfo(){return std::string("This is an instance of class A");}

std::string B::getTypeInfo(){return std::string("This is an instance of class B");}

std::string C::getTypeInfo(){return std::string("This is an instance of class C");}


#include <iostream>
void test()
{
		std::cout << "test func" << std::endl;
}

std::string printObjectTypeInfo1(A* object){return object->getTypeInfo();}
std::string printObjectTypeInfo2(A& object){return object.getTypeInfo();}
