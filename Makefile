all: inttest

inttest: inttest.c
	gcc -Wall -o inttest inttest.c

clean:
	rm -rf *~ inttest
