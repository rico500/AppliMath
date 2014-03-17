#include <stdio.h>
#include "appliMath.h"

/*Somme de 1/k! jusqu'a n*/
float sommeDefi(int n){
  float p;
  int i=1;
  for(i; i<=n; i++){
    p = p + (1/(float)factorielle(i)); 
  }
  return p;
}

int main(void){
  int n = ask_int("For the sum of 1/k! choose n:\n");
  
  printf("result: %f\n", sommeDefi(n));
}
