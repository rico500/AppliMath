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
#include <math.h>

int factorielle(int n){
  return((n<=0) ? 1 : n*factorielle(n-1));
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

/*
 * sum: fait la somme de i jusqu'a n de la fonction avec la vriable k.
 * AUTHOR: Eric Brunner
 * PARAMS: int n - nombre d'iterations
 *         int i - valeure de depart
 *         float (*fctPointer)(int k) - pointeur a la fonction
 * RETURN: float - resultat de la somme a la precision du float
 * DATE/VERSION: 17 mars 2014 / V1.0
 * 
*/
float sum(int n, int i,float (*fctPointer)(int k)){
  float p = 0;
  int iterator;
  for(iterator = i; iterator <= n; iterator++){
    p = p + (*fctPointer)(iterator);
  }
  return p;
}


/*
 * vérifie si un nombre est premier
 * PARAM: int n - nombre a vérifier
 * RETURN: int - 1 si c'est un premier et 0 si ca ne l'est pas.
 * 
*/
int isPremier(int n){
        int i;
        for(i = 2; i<=sqrt(n); i++){
                if(remainder((double)n, (double)i) == 0.0){
                        return 0;//n'est pas un premier
                }
        }
        return 1;//est un premier
}

