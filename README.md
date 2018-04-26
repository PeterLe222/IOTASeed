# IOTA Seed Generation 

## Generating a random 81 character seed using only A-Z and the number 9

## There are options to generate IOTA seed: 

###### C programming language
```
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
```
###### Matlab
```
% IOTA seed includes upperletter from A-Z and number 9
inputSeed = ['A':'Z' '9'];

% Count the length of inputSeed 
arraySeed = numel(inputSeed);

% Genertate random intergers from 1 to 27 into 81 positions 
SeedGeneration = randi(arraySeed, [1 81]);

% Show the letters and number 9 from inputSeed based on random numbers
% 1-27 which generated from SeedGeneration
generateSeed = inputSeed(SeedGeneration)
```

###### Linux 
```
cat /dev/urandom |tr -dc A-Z9|head -c${1:-81} 
```
###### Mac
```
cat /dev/urandom |LC_ALL=C tr -dc 'A-Z9' | fold -w 81 | head -n 1 
```
