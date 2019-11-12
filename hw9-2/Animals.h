
#include<string>
class Animal{
	public:
		Animal(std::string, int);	
		virtual void printInfo() = 0;
		virtual ~Animal();
	protected:
		std::string name;
		int age;
};

class Zebra:public Animal{
	public:
		Zebra(std::string, int, int);
		virtual void printInfo();
		virtual ~Zebra();
	private:
		int numStripes;
};

class Cat:public Animal{
	public:
		Cat(std::string, int, std::string);
		virtual void printInfo();
		virtual ~Cat();
	private:
		std::string favoriteToy;
};
