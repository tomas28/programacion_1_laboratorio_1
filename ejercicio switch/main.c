#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hora;

    printf("ingrese una hora ");
    fflush(stdin);
    scanf("%c",&hora);

     switch(hora)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
            printf("a dormir");
            break;
        case '7':
        case '8':

            printf("buenos dias");
            break;
        case '9':
        case '10':
        case '11':
        case '12':
        case '13':
        case '14':
        case '15':
        case '16':
        case '17':
        case '18':
        case '19':
        case '20':
        case '21':
        case '22':
        case '23':
            printf("cualquier cosa");
            break;
        default:
            printf("ingrese una hora valida");
    }
    /*int hora;
    printf("ingrese una hora ");
    scanf("%d",&hora);
    switch(hora)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("a dormir");
            break;
        case 7:
        case 8:
        case 9:
            printf("buenos dias");
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
            printf("cualquier cosa");
            break;
        default:
            printf("ingrese una hora valida");
    }

    */
    return 0;
}
