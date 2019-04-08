#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main()
{
    char nombres[20] ={ {"sonia"}, {"pedro"},{"raul"},{"maria"},{"ana"},{"tomas"},{"sara"},{"matias"},{"agustin"},{"agus"} };
    int legajos[20] = {234, 453, 112, 876, 543, 857, 322, 207, 765, 923};
    float sueldos[20] = { 23500.50, 34000, 45750, 23400, 13200, 28750, 32120, 21600, 29800.50, 55800};
    char sexos[20] = { 'f', 'm', 'm', 'f', 'f', 'm', 'f', 'm', 'm', 'f'};
    int auxInt;
    char auxChar;
    float auxFloat;
    char auxcad[20];


    printf("Nombres Legajo  Sexo     Sueldo\n\n");

    for(int i=0; i < TAM; i++)
    {
        printf(" %10s   %d     %c     %.2f\n",nombres[i], legajos[i], sexos[i], sueldos[i]);
    }

    printf("\n\n");

    for(int i=0; i < TAM -1; i++)
    {
        for(int j= i + 1; j < TAM; j++)
        {
            if( sexos[i] > sexos[j])
            {
                auxChar = sexos[i];
                sexos[i] = sexos[j];
                sexos[j] = auxChar;

                auxFloat = sueldos[i];
                sueldos[i] = sueldos[j];
                sueldos[j] = auxFloat;

                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                strcpy(auxcad,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxcad);

            }

            else if( sexos[i] == sexos[j] &&  strcmp(nombres[i],nombres[j])<0 )
            {

                auxFloat = sueldos[i];
                sueldos[i] = sueldos[j];
                sueldos[j] = auxFloat;

                auxInt = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxInt;

                strcpy(auxcad,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxcad);
            }
        }
    }


    printf("Nombre Legajo  Sexo     Sueldo\n\n");

    for(int i=0; i < TAM; i++)
    {
        printf(" %10s  %d     %c     %.2f\n",nombres[i] legajos[i], sexos[i], sueldos[i]);
    }

    printf("\n\n");



    return 0;
}
