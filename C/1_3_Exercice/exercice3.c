#include <stdio.h>
#include "appliMath.h"

int Sommecarre(int n){
	int p = 0;
	int k = 0;
	for(k=0; k <=n; k++){
		p=p+(k*k);
	}
	return(p);
}

int main(void){
	int n = ask_int("How many iterrations of Sommecarre would you like?\n");

	printf("result: %d\n", Sommecarre(n));
}
