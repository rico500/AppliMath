#include <stdio.h>
#include <math.h>

int isPremier(int n){
	int i;
	for(i = 2; i<=sqrt(n); i++){
		if(remainder((double)n, (double)i) == 0.0){
			return 0;//n'est pas un premier
		}
	}
	return 1;//est un premier
}

int main(void){
	int i;
	for(i = 0; i < 15; i++){
		printf("%d %s\n", i, isPremier(i) ? "est premier." : "n'est pas premier.");
	}
}
