message_hider.o: message_hider.c encrypt.o encrypt.h
	gcc -c message_hider.c
encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c
message_hider: message_hider.o
	gcc message_hider.o -o message_hider