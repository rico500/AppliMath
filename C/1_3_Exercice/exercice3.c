#include <stdio.h>

int Sommecarre(int n){
	int p = 0;
	int k = 0;
	for(k=0; k <=n; k++){
		p=p+(k*k);
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

int main(void){
	int n = ask_int("How many iterrations of Sommecarre would you like?\n");

	printf("result: %d\n", Sommecarre(n));
}
