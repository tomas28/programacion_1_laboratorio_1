#include <stdio.h>
#include <stdlib.h>
#define REPETICION 1
struct datosPersonales{
char nombre[20];
char apellido[20];
char calle[20];
int numero;
int codigoPostal;
};
int main()
{
    struct datosPersonales vecAgenda[3],vecContactos[3];
    int i;
    for(i=0; i<REPETICION; i++){
        printf("ingrese el nombre\n");
        gets(vecAgenda[i].nombre);

        printf("ingrese el apellido\n");
        gets(vecAgenda[i].apellido);

        printf("ingrese la calle\n");
        gets(vecAgenda[i].calle);

        printf("ingrese el numero\n");
        scanf("%d",&vecAgenda[i].numero);

        printf("ingrese el codigo postal\n\n");
        scanf("%d",&vecAgenda[i].codigoPostal);
         fflush(stdin);
    }
    for(i=0; i<REPETICION; i++){

        strcpy(vecAgenda[i].nombre,vecContactos[i].nombre);
        strcpy(vecContactos[i].apellido,vecAgenda[i].apellido);
        strcpy(vecContactos[i].calle,vecAgenda[i].calle);
        strcpy(vecContactos[i].numero,vecAgenda[i].numero);
        strcpy(vecContactos[i].codigoPostal,vecAgenda[i].codigoPostal);


        printf("\nel nombre copiado es: %s",i,vecContactos[i].nombre);
        printf("\nel apellido copiado es: %s",i,vecContactos[i].apellido);
        printf("\nla calle copiado es: %s",i,vecContactos[i].calle);
        printf("\nel numero copiado es: %d",i,vecContactos[i].numero);
        printf("\nel codigo copiado postal es: %d",i,vecContactos[i].codigoPostal);
    }


    /*printf("ingrese el nombre\n");
    gets(agenda.nombre);
    fflush(stdin);

    printf("ingrese el apellido\n");
    gets(agenda.apellido);
    fflush(stdin);

    printf("ingrese la calle\n");
    gets(agenda.calle);
    fflush(stdin);

    printf("ingrese el numero\n");
    scanf("%d",&agenda.numero);
    fflush(stdin);
    printf("ingrese el codigo postal\n");
    scanf("%d",&agenda.codigoPostal);
    fflush(stdin);
    /*
    strcpy(agenda.nombre, "tomas");
    strcpy(agenda.apellido, "garcia");
    strcpy(agenda.calle,"asdasdsa ");
    agenda.numero = 1574;


    printf("el nombre es: %s",agenda.nombre);
    printf("\nel apellido es: %s",agenda.apellido);
    printf("\nla calle es: %s",agenda.calle);
    printf("\nel numero es: %d",agenda.numero);
    printf("\nel codigo postal es: %d",agenda.codigoPostal);
    */

    return 0;
}
