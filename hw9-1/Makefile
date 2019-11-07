all : classes print_info print_member 
classes : classes.o classes_main.o
	g++ -o classes classes.o classes_main.o

print_info : print_info.o print_info_main.o
	g++ -o print_info print_info.o print_info_main.o

print_member : print_member.o print_member_main.o
	g++ -o print_member print_member.o print_member_main.o
clean : 
	rm *.o
