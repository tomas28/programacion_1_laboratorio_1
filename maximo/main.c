#include <stdio.h>
#include <stdlib.h>
#include "pino.h"

int main()
{
    int num1;
    int num2;
    int num3;
    int max;

    printf("ingrese el primer numero\n");
    scanf("%d", &num1);

    printf("ingrese el segundo numero\n");
    scanf("%d", &num2);

    printf("ingrese el tercer numero\n");
    scanf("%d", &num3);

    max=maximo(num1,num2,num3);

    printf("el maximo es: %d",max);

    return 0;
}
