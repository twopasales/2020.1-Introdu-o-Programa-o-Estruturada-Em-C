#include <stdio.h>
//para n=6 a saída impressa na tela deverá ser 1, 3, 5, 7, 9, 11.
int main() {
  int num,i,impar; 
  printf("digite um numero Natural:\n");
  scanf("%d",&num);
  i=0;
  impar=1; 
  printf("Os primeiros impares sao:\n");
  while (i<num)
  {
  printf ("%d\n",impar);
  impar=impar+2;
  i=i+1;
  }
  return 0;
  }