#include <stdio.h>
main()
{
    float R1, R2,R3,RF, V;
    int E;
    printf("Calcular los ohms que debe tener una resistencia para determinado led.\n");
    printf ("¿Que led deces conectar?:\n");
		printf ("[1]-Verde brillante\n");
		printf ("[2]-Blanco\n");
		printf ("[3]-Rojo brillante\n");
		scanf ("%d", &E);

    printf("Escribe los volts con los que trabajaras:");
    scanf("%f", &V);


    switch(E)
    {
        case 1:
			R1 = V - 3;
     RF = R1/0.02;
			break;
		case 2:
			R2 = V - 2.8;
     RF= R2 / 0.02;
			break;
		case 3:
			R3 = V - 2;
     RF= R3/ 0.02;
			break;
     default:
			printf ("No ha seleccionado una opcion correcta");
    }
		printf ("La resistencia a emplear debe ser de:%f", RF);


    return 0;
}
