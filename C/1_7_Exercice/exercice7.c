#include <stdio.h>

typedef struct moduloStruct{
	int quotient;
	int rest;
} modstruct;

modstruct modulo(int n){
	
	modstruct result;	

	int p = 6;
	int j = 0;

	while(n >= p){
		n = n - p;
		j = j + 1;
	}
	result.quotient = j;
	result.rest = n;

	return result;
}

int main(void){

	modstruct result = modulo(142);
	printf("result:\nquotient = %d\t reste = %d\n", result.quotient, result.rest);
	return 0;
}
