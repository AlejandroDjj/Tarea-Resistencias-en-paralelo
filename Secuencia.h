//programa de secuencia a,b, c, d,
#include<stdio.h>

int main()
{
     int suma=-1, n, suma1=-1, suma2=40, suma3=7;
    printf("Ingrese la cantidad de numeros que quiera ver:\n");
    scanf("%d",&n);



    printf("La secuencia es:\n");
    printf("a)");
    for(int i=1; i<=n; i++)
    {
        suma=suma+2;

        printf("%d,  " ,suma);
    }


    printf("\nb)");
    for(int i=1; i<=n; i++)
    {
        suma1=suma1+3;

        printf("%d,  " ,suma1);
    }


    printf("\nc)");
    for(int i=1; i<=n; i++)
    {
        suma2=suma2-10;

        printf("%d,  " ,suma2);
    }

    printf("\nd)");
    for(int i=1; i<=n; i++)
    {
        suma3=suma3+8;

        printf("%d,  " ,suma3);
    }

    return 0;

}
