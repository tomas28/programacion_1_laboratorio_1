#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20]= {"JUAN"};
    char apellido[20]= {"PEREZ"};
    char nombreCompleto[41];

    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto, ", ");
    strcat(nombreCompleto, nombre);
    strlwr(nombreCompleto);
    nombreCompleto[0]= toupper(nombreCompleto[0]);
    for(int i=0; i< strlen(nombreCompleto);i++){
        if(nombreCompleto[i]== ' '){

        }
    }



    puts(nombreCompleto);


   return 0;
}
