#include <stdio.h>

int factorielle(int n){
	int p=1;
	int i;
	for(i=1;i<=n;i++){
		p = p*i;
	}
	return(p);
}

int ask_int(char* q){
	//ask question
	while(*q != '\0'){
		printf("%c", *q);
		q++;
	}

	//get answer
	int answer;
	scanf("%d", &answer);
	return answer;
}

main(void){
	int n = ask_int("How many iterations of the factorielle function would you like?\n");
	printf("%d", n);
	int result = factorielle(n);
	printf("result: %d \n", result);
}
