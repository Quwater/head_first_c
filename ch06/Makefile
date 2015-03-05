display.o: display.c tour.h
	gcc -c display.c
tour.o: tour.c tour.h
	gcc -c tour.c
tour: tour.o display.o
	gcc tour.o display.o -o tour