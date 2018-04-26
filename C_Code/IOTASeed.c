#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print (int seed) {
	char arrLetter [] = "QWERTYUIOPASDFGHJKLZXCVBNM";	// A-Z array
	int num = 9;	// only number 9 is able in IOTA seed
	
	/* Print letter if random number from 0-25 (range of A-Z) */
	if (seed != 26) {
		printf("%c", arrLetter[seed]);
	}
	/* Print number 9 if random number is 26 */
	else {
		printf("%d", num);
	}

}
int main () {
	int i, n, seed;
	time_t t;

	n = 81; // length of the IOTA seed
	
	/* Intializes random number generator */
	srand((unsigned) time(&t));

	/* Print IOTA seed */
	for ( i = 0; i < n; i++ ) {
		seed = rand() % 27;	// generate random number 0-26
	       	print(seed);	// pass random number to print function
	}
	
	printf("\n");

	return 0;	
}
