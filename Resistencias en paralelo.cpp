#include <stdio.h>
main()
{
    float R1, R2,R3, RT, A, Vr1,Vr2,Vr3, V;
    printf("Calcular la resistencia total y la intencidad de cada resistencia en un circuito de 3 resistencias en paralelo\n");
    printf("Introduzca el valor de la funte en volts:\n");
    scanf("%f", &V);
    printf ("Por favor escriba su primer resistencia 1\n");
    scanf ("%f", &R1);
    printf ("Por favor escriba su primer resistencia 2\n");
    scanf ("%f", &R2);
    printf ("Por favor escriba su primer resistencia 3\n");
    scanf ("%f", &R3);
    A=1/R1+1/R2+1/R3;
    RT=1/A;

    Vr1=V/R1;
    Vr2=V/R2;
    Vr3=V/R3;


    printf("la resistencia total es de: %f\n",RT);
    printf("El valor de la intencidad en la primera resistensia es:%f\n",Vr1);
    printf("El valor de la intencidad en la segunda resistensia es:%f\n",Vr2);
    printf("El valor de la intencidad en la tercera resistensia es:%f\n",Vr3);

    return 0;

}
