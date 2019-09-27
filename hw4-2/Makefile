all : my_list print_people 
my_list : my_list.o
	g++ -o my_list my_list.o

print_people : print_people.o
	g++ -o print_people print_people.o
clean : 
	rm my_list
	rm print_people
	rm *.o