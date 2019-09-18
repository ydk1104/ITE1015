all : array_pointer call_by_reference

array_pointer : array_pointer.o
	g++ -o array_pointer array_pointer.o

array_pointer.o : array_pointer.cc
	g++ -c -o array_pointer.o array_pointer.cc

call_by_reference : call_by_reference.o
	g++ -o call_by_reference call_by_reference.o

call_by_reference.o : call_by_reference.cc
	g++ -c -o call_by_reference.o call_by_reference.cc

clean :
	rm *.o
	rm array_pointer
	rm call_by_reference
