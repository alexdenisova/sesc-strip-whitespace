run: whsp
	./whsp

whsp: whsp.c
	gcc -Wall -std=c11 whsp.c -o whsp

build: whsp
