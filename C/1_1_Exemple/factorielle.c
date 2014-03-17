#include <stdio.h>
#include "appliMath.h"

main(void){
	int n = ask_int("How many iterations of the factorielle function would you like?\n");
	int result = factorielle(n);
	printf("result: %d \n", result);
}
