/*
 * Example d'utilisation de la fonction sum de la librairie lib_appliMath.c
*/

#include <stdio.h>

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

void main(void){
  
  float content(int k){
  return (k+2)*(k+2);
  }
  //prints: 50.000000
  printf("%f\n", sum(3, 1, &content));
}
