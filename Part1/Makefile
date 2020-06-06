
CC=gcc
FLAGS= -Wall -g
LIBSO=libhello_ariel.so

HELLO_ARIEL_OBJ = hello_ariel.o
HEADER=hello_ariel.h
MAIN=hello_ariel.c

all:main1_1 main1_2 main1_3 hello_ariel_


main1_1: $(HEADER) $(MAIN) main1_1.c
	$(CC) $(FLAGS) $(MAIN) main1_1.c -o main1_1



hello_ariel_: $(HEADER) $(MAIN) 
	$(CC) -shared $(MAIN) -fPIC -o $(LIBSO)



main1_2: $(HEADER) $(MAIN) hello_ariel_
	$(CC) $(FLAGS) main1_1.c -L. -l hello_ariel -o main1_2


main1_3: $(HEADER) main1_3.c hello_ariel_
	$(CC) $(FLAGS) main1_3.c -fPIC -ldl -o main1_3


.PHONY: clean all 

clean:
	rm -f *.o *.so main1_1 main1_2 main1_3
