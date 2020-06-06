
all: Fork Clone Daemon main2_4


Fork: main2_1.o
	gcc -Wall -g -o Fork main2_1.o
    
Clone: main2_2.o
	gcc -Wall -g -o Clone main2_2.o
    
Daemon: main2_3.o
	gcc -Wall -g -o Daemon main2_3.o
	
main2_4:main2_4.c
	gcc -Wall main2_4.c main2_4.c -o main2_4
    
main2_1.o: main2_1.c
	gcc -Wall -g -c main2_1.c
    
main2_2.o: main2_2.c
	gcc -Wall -g -c main2_2.c
    
main2_3.o: main2_3.c
	gcc -Wall -g -c main2_3.c


.PHONY: clean all

clean:
	rm -f *.o *.a Fork Daemon Clone main2_4