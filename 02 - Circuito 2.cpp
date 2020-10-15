#include<stdio.h>

main()
{
    int cont=0, N;

printf(" introduce el valor de n:");
scanf("%d",&N);

while(cont<=N+N+1)
{

    printf(" %d \t",(3*N)+(cont*2));

    cont=cont+1;
}

return 0;

}
