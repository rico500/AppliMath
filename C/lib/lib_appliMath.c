/* appliMath.c
 *
 * Compilation de fonctions utiles entre les exercices.
 *
 * UTILISATION:(compile) $ gcc -iquote <lib_path>/ -c <code>.c -o <code>.o
 *             (link)    $ gcc <lib_path>/lib_appliMath.o <code>.o -o <code>
 * AUTHOR: Eric Brunner
 * DATE: 15 mars 2014
*/

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
