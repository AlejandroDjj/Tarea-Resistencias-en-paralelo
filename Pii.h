//Programa de pi
#include<stdio.h>

int main()
{
    int i, j=0,n;
    float pi=0;

    printf("Dame el valor de n:\n");
    scanf("%i", &n);

    for(i=1; i<=n; i+=2)
    {
       if(i==1 || j==4) {
            pi = pi + (4/(float)i);
            j=2;
        }

        else{
            pi = pi - (4/(float)i);
            j=j+2;

            }
    }

    printf("El valor de pi es:%f\n", pi);
    return 0;
}
