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



   while(rta !='s')
    {
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
           if(result1==0 && result2==0){
               printf("los dos operadores son negativos\n");
           }else if(result2==0){
                printf("el segundo operador es negativo\n");
                }else if(result1==0){
                    printf("el primer operador es negativo\n");
                }else{
                    printf("El factorial de A es: %d y El factorial de B es: %d\n",result1,result2);
                }

         printf("si desea salir del programa aprete s\n");
         fflush(stdin);
         scanf("%c",&rta);
    }

    return 0;
}

