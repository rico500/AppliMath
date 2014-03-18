#include <stdio.h>
#include "appliMath.h"

/*
* calcule la racine de n
*/
float heron(int n){
	float a = 0;
	float b = n;
	int i;
	for(i = 0; i <= 6; i++){
		a = (a+b)/2;
		b = (float)n/a;
		printf("Etape: %d\theron de %d = %f\n", i, n, a);
	}
	return (a+b)/2;
}

int main(void){
	int facteur = ask_int("De quelle valeure voulez vous connaître la racine?\n");
	
	printf("\nresult of heron(%d): %f\n", facteur, heron(facteur));
}
