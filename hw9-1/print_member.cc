#include<iostream>
#include<string>
#include"print_member.h"

A::A(int input){memberA = new int(input); std::cout << "new memberA" << '\n';}

void A::print(){std::cout << "*memberA " << *memberA << '\n';}

A::~A(){delete memberA; std::cout << "delete memberA\n";}


B::B(double input):A(1){memberB = new double(input); std::cout << "new memberB" << '\n';}

void B::print(){A::print(); std::cout << "*memberB " << *memberB << '\n';}

B::~B(){delete memberB; std::cout << "delete memberB\n";}


C::C(std::string input):B(1.1){memberC = new std::string(input); std::cout << "new memberC" << '\n';}

void C::print(){B::print(); std::cout << "*memberC " << *memberC << '\n';}

C::~C(){delete memberC; std::cout << "delete memberC\n";}
