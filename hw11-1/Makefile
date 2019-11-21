all : MyVector string 
MyVector : MyVector.o MyVector_main.o
	g++ -o MyVector MyVector.o MyVector_main.o

string : string.o string_main.o
	g++ -o string string.o string_main.o
clean : 
	rm *.o
