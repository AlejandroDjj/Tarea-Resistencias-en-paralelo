#include<stdio.h>

int main()
{
    int S, R, N, cont=0;

  printf(" Escriba  el numero:");
  scanf("%d", &N);

  while(cont<=N)
{
    S=cont;
    R=(N*N)-2*S;
    printf("%d \t", R);
    cont=cont+1;
}

  return 0;
}
