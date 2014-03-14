#include <stdio.h>

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
