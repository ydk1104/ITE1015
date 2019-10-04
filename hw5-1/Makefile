all : cmdarg swaping circle command_argument 
cmdarg : cmdarg.o
	g++ -o cmdarg cmdarg.o

swaping : swaping.o
	g++ -o swaping swaping.o

circle : circle_main.o circle.o
	g++ -o circle circle_main.o circle.o

circle_main.o : circle.h circle_main.cc
circle.o : circle.h circle.cc

command_argument : command_argument.o
	g++ -o command_argument command_argument.o
clean : 
	rm cmdarg
	rm swaping
	rm circle
	rm command_argument
	rm *.o
