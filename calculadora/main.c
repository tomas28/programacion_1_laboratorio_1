#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
   double primerO;
   double segundoO;
   double resultado;
   int result1;
   int result2;
   char rta = '0';

   printf("si desea salir del programa aprete s\n");
   scanf("%c",&rta);

   while(rta !='s')
    {


        if(rta!='s'){
            fflush(stdin);
            printf("usted entro al programa\n");
            printf("ingrese el operador A\n");
            scanf("%lf",&primerO);
            printf("ingrese el operador B\n");
            scanf("%lf",&segundoO);
            resultado = sumar(primerO,segundoO);
            printf("El resultado de A+B es: %lf\n",resultado);
            resultado = restar(primerO,segundoO);
            printf("El resultado de A-B es: %lf\n",resultado);
            resultado = dividir(primerO,segundoO);
            if(resultado==0){
                printf("No es posible dividir por cero\n");
            }else{
                printf("El resultado de A/B es: %lf\n",resultado);
            }
            resultado = multiplicar(primerO,segundoO);
            printf("El resultado de A*B es: %lf\n",resultado);
            result1= factorial(primerO);
            result2= factorial(segundoO);
           if(result1==0){
               printf("el primer operador es negativo\n");
           }else{
               if(result2==0){
                printf("el segundo operador es negativo\n");
                }
                printf("El factorial de A es: %d y El factorial de B es: %d\n",result1,result2);
            }
        }

         printf("si desea salir del programa aprete s\n");
         scanf("%c",&rta);
    }

    return 0;
}

