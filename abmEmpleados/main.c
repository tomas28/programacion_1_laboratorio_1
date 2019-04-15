#include <stdio.h>
#include <stdlib.h>

int TAM=2;

typedef struct{
    char nombreCompleto[50];
    int legajo;
    char sexo;
    float sueldo;
    int estado;
    }eEmpleado;

void inicializarEmpleado(eEmpleado vec[],int tam);
void mostrarEmpleado(eEmpleado emp);
void mostrarEmpleados(eEmpleado vec[],int tam);
int buscarEmpleado(eEmpleado vec[],int tam,int legajo);
int main()
{
   char seguir ='s';
    int opcion;
    eEmpleado lista[50]={{"tomas",2222,'m',30000,1},{"maria",1111,'f',24000,1}};
    //inicializarEmpleado(lista,TAM);

    do{
        printf("1-Dar de alta a empleado\n");
        printf("2-Baja empleado\n");
        printf("5-\n");
        printf("4-\n");
        printf("5-Mostrar datos\n");
        printf("6-salir\n");
        scanf("%d",&opcion);

    switch(opcion){
        case 1:
            mostrarEmpleados(lista,TAM);

            break;

    }

    }while(seguir!='s');
    return 0;
}
void inicializarEmpleado (eEmpleado vec[],int tam){

for(int i =0; i<tam;i++){
    vec[i].estado=0;
    }
}

void mostrarEmpleado(eEmpleado emp){
printf("%s  %d  %c  %.2f\n",emp.nombreCompleto,emp.legajo,emp.sexo,emp.sueldo);
}

void mostrarEmpleados(eEmpleado vec[],int tam){
    int contador=0;

    printf("Nombre  Legajo  Sexo  Sueldo\n");

    for(int i=0; i< tam; i++){
        if(vec[i].estado==1){
            mostrarEmpleado(vec[i]);
            contador ++;
        }
    }
    if(contador ==0){
        printf("no hay ningun empleado que mostrar");
    }
}
int buscarLibre(eEmpleado vec[],int tam){
    int indice=-1;

    for(int i=0; i< tam; i++){
        if(vec[i].estado==0){
            indice= 1;
            break;
        }
    }

}
int buscarEmpleado(eEmpleado vec[],int tam,int legajo){
    for(int i=0; i< tam; i++){
        if(vec[i].estado==1 && vec[i].legajo){
            indice= 1;
            break;
        }
    }
    return indice;
}
void altaEmpleado(empleado vec[], int tam){
int indice;
int esta;
indice=buscarLibre(vec.tam);

if(indice ==-1){
    prinf("\nno hay lugar ej el sistema")
}else{
    printf("inrese legajo: ");
    scanf("%d"&legajo);
    esta=buscarEmpleado(vec,tam,legajo);
    if(esta!=-1){
        printf("existe un e,mpleado de legajo %d en el sistema\n",);
        mostrarEmpleado(vec[esta]);
    }else{
        vec[indice].legajo=legajo;
        printf("ingrese nombre\n");
        fflush(stdin);
        get(vec[indice].nombre);

        printf("ingrese sexo\n");
        fflush(stdin);
        scanf("%c"&vec[indice].sexo);
        vec[indice].legajo=legajo;

        printf("ingrese legajo\n");
        fflush(stdin);
        get(vec[indice].nombre);


    }
}
}

