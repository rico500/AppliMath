#include <stdio.h>
#include <math.h>

float Sommecarre(int n){
	float p = 0;
	float k = 0;
	for(k=0; k <n+1; k++){
		p=p+(1/(k*k+k));
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

	printf("result: %f\n", Sommecarre(n));
}
