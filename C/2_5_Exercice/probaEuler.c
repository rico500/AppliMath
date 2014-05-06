#include <stdio.h>
#include "appliMath.h"

#define NUM_OF_TESTS 100

int formuleEuler(n){
	return n*n-n+41;
}

int main(void){
	int succes = 0;
	int i;
	for(i = 0; i < NUM_OF_TESTS; i++){
		if(isPremier(formuleEuler(i))){
			succes++;
		}
	}
	
	printf("La formule d'Euler a un taux d'exactitude de %f%% pour n appartenant à l'interval 0 à %d.\n", (double)succes*100/NUM_OF_TESTS, NUM_OF_TESTS);
}
