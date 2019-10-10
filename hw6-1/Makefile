all : simple_account simple_shape 
simple_account : simple_account.o simple_account_main.o
	g++ -o simple_account simple_account.o simple_account_main.o

simple_shape : simple_shape.o simple_shape_main.o
	g++ -o simple_shape simple_shape.o simple_shape_main.o
clean : 
	rm *.o
	rm simple_account
	rm simple_shape
