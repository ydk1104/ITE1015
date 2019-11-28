all : MySwap MyVector 
MySwap : MySwap.o
	g++ -o MySwap MySwap.o

MyVector : MyVector.o MyContainer.o MyVector_main.o
	g++ -o MyVector MyVector.o MyContainer.o MyVector_main.o

clean : 
	rm *.o
