all : world_clock calendar 
world_clock : world_clock.o world_clock_main.o
	g++ -o world_clock world_clock.o world_clock_main.o

calendar : calendar.o calendar_main.o
	g++ -o calendar calendar.o calendar_main.o
clean : 
	rm *.o
