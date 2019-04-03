#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cadena[50];
    printf("ingrese algo");
    fflush(stdin);
    fgets(cadena);
    printf("%s",cadena);
    return 0;
}
