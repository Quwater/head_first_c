catalog_lable.o: catalog_lable.c catalog_lable.h
	gcc -c catalog_lable.c

pool_puzzle.o: pool_puzzle.c catalog_lable.h
	gcc -c pool_puzzle.c

pool_puzzle: pool_puzzle.o catalog_lable.o
	gcc pool_puzzle.o catalog_lable.o -o pool_puzzle