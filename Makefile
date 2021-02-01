compile:
	gcc -o exec main.c header.h insertionSort.c quickSort.c bubbleSort.c radixSort.c -g -Wall
run:
	./exec