all : number rectangle 
number : number.o number_main.o
	g++ -o number number.o number_main.o

rectangle : rectangle.o rectangle_main.o
	g++ -o rectangle rectangle.o rectangle_main.o
clean : 
	rm *.o
