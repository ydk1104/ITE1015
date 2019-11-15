all : print_shape clock_time 
print_shape : print_shape.o print_shape_main.o
	g++ -o print_shape print_shape.o print_shape_main.o

clock_time : clock_time.o clock_time_main.o
	g++ -o clock_time clock_time.o clock_time_main.o
clean : 
	rm *.o
