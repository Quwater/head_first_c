hfcal.o: hfcal.c hfcal.h
	gcc -I. -c hfcal.c -o hfcal.o
elliptical.o: elliptical.c hfcal.h
	gcc -I. -c elliptical.c -o elliptical.o
libhfcal.a: hfcal.o
	ar -rcs libhfcal.a hfcal.o
elliptical: libhfcal.a elliptical.o
	gcc elliptical.o -I. -L. -lhfcal -o elliptical