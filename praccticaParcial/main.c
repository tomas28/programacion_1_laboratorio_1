#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#define CANT 5
#define TAM 2

typedef struct
{
    int id;
    char descripcion[20];
} eSector;
typedef struct
{

    int legajo;
    char nombre[51];
    char apellido[51];
    char sexo;
    float sueldo;
    int idSector;
    int isEmpty;

} eEmpleado;
int buscarLibre(eEmpleado vec[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
void mostrarEmpleado(eSector sectores[], int tam, eEmpleado emp);
int menu();
void iniSectores (eSector Sectores[],int cantidad);
void altaEmpleado(eEmpleado vec[], int tam, eSector sectores[]; int tamSector);

int main()
{
    eSector sectores[]={1,"RRHH"};
    do
    {
        switch(menu())
        {

        case 1:
            //printf("\nAlta empleado\n\n");
            altaEmpleado(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;

        case 2:
            printf("\nBaja empleado\n\n");
            system("pause");
            break;

        case 3:
            printf("\nModificacion empleado\n\n");
            system("pause");
            break;

        case 4:
            printf("\nOrdenar empleados\n\n");
            system("pause");
            break;

        case 5:
            //printf("\nListar empleados\n\n");
            mostrarEmpleados(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;

        case 6:
            //printf("\nListar empleados\n\n");
            mostrarSectoresConEmpleados(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;
         case 7:
            //printf("\nListar empleados\n\n");
            mostrarCantEmpleadosXSector(lista, TAM, sectores, TAMSEC);
            system("pause");
            break;

        case 8:
            printf("\nConfirma salida s/n?: ");
            fflush(stdin);
            confirma = getche();

            if( tolower(confirma) == 's')
            {
                seguir = 'n';
            }
            break;

        default:
            printf("\n Opcion invalida\n\n");
            system("break");
        }
    }
    while(seguir == 's');

    return 0;
}
int menu()
{
    int opcion;

    system("cls");
    printf("  *** ABM Empleados ***\n\n");
    printf("1- Alta Empleado\n");
    printf("2- Baja Empleado\n");
    printf("3- Modificacion Empleado\n");
    printf("4- Ordenar Empleados\n");
    printf("5- Listar Empleados\n");
    printf("6- Listar Sectores con Empleados\n");
    printf("7- Cantidad de empleados por sector\n");
    printf("8- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void iniSectores(eSector Sectores[],int cantidad){

eSector sec[]={1,"RRHH"};

for(int i=0;i<cantidad;i++){
    Sectores[i]=sec[i];
}
}
void mostrarEmpleado(eSector sectores[], int tam, eEmpleado emp)
{
    char nombreSector[20];
    int consigioNombre;

    //obtenerSector(sectores, tam, emp.idSector, nombreSector);

    /*if( !consigioNombre){
         strcpy(nombreSector, "Sin definir");
     }*/
    printf("   %d       %10s     %c    %.2f  %s\n", emp.legajo, emp.nombre, emp.sexo, emp.sueldo, nombreSector);

}

int buscarEmpleado(eEmpleado vec[], int tam, int legajo)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 1 && vec[i].legajo == legajo)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int buscarLibre(eEmpleado vec[], int tam)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(vec[i].isEmpty == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

void altaEmpleado(eEmpleado vec[], int tam, eSector sectores[], int tamSector)
{

    int indice;
    int legajo;
    int esta;


    indice = buscarLibre(vec, tam);

    if( indice == -1)
    {

        printf("\nNo hay lugar en el sistema\n");
    }
    else
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if( esta != -1)
        {
            printf("Existe un empleado de legajo %d en el sistema\n", legajo);
            mostrarEmpleado(sectores, tamSector, vec[esta]);
        }
        else
        {
            vec[indice].legajo = legajo;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(vec[indice].nombre);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &vec[indice].sexo );

            printf("Ingrese sueldo: ");
            scanf("%f", &vec[indice].sueldo );

            vec[indice].isEmpty = 1;

            printf("Alta empleado exitosa!!!\n\n");

        }
    }

}


/*empleado.c
empleado.h
input.c
input.h*/

/*mostrar de 1 a muchos
for(i)
    for(j)
    if(i==j)*/

/*relacion mucos a muichos
eAlmuerzo
empleado.legajo
menu.codigo
for(empleado i)
    for(almuerzo j)
        if(empleado.legajo==almuerzo.legajo)
        for(menu) k*/
//si se empieza no se puede dar de baja y si se agrega y desp se da de baja se debe resar(usar contadr)


