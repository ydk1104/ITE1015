all : sorted_array integer_set 
sorted_array : sorted_array.o sorted_array_main.o
	g++ -o sorted_array sorted_array.o sorted_array_main.o

integer_set : integer_set.o integer_set_main.o
	g++ -o integer_set integer_set.o integer_set_main.o
clean : 
	rm *.o
