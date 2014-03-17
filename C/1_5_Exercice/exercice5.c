#include <stdio.h>
#include "appliMath.h"

int mystere(int n){
  int p = 1;
  int k = 1;
  
  while(k<n+1){
    p = p*k;
    k = k+1;
  }

  return p;
}

void main(void){
  int n = ask_int("How many iterations of the mystery function would you like:\n");

  printf("result: %d\n", mystere(n));
}
