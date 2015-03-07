hfcal.o: hfcal.c hfcal.h
	gcc -I. -fPIC -c hfcal.c -o hfcal.o
elliptical.o: elliptical.c hfcal.h
	gcc -I. -c elliptical.c -o elliptical.o
libhfcal.dylib: hfcal.o
	gcc -shared hfcal.o -o libhfcal.dylib
elliptical: libhfcal.dylib elliptical.o
	gcc elliptical.o -I. -L. -lhfcal -o elliptical