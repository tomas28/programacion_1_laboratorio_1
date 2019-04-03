#include <stdio.h>
#include <stdlib.h>
#include '../C:\Users\alumno\Desktop\tp practica'

int main()
{  double primerO;
   double segundoO;
   double resultado;
   int result1;
   int result2;
   char rta = 's';

   do{
        printf("ingrese el operador A\n");
        scanf("%lf",&primerO);
        printf("ingrese el operador B\n");
        scanf("%lf",&segundoO);
        printf("si desea salir del programa aprete s\n");
        scanf("%c",&rta);

   }while(rta!='s');

    return 0;
}
