#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//ejemplo3
void mostrarVector1(int vec[],int tam);
void mostrarVector2(int vec[],int tam);
void mostrarVector3(int* vec[],int tam);
void mostrarVector4(int* vec[],int tam);
//ejermplo4
void getChar(char* message,char* caracter);
typedef struct{
int legajo;
char nombre[50];
char sexo;
int sueldo;
}eEmpleado;



int main()
{


    eEmpleado unEmpleado={1234, "juan",'m',1000};
    eEmpleado otroEmpleado={1154, "juana",'f',5000};
    eEmpleado lista []={unEmpleado,otroEmpleado};
    printf("%s",(lista+1)->nombre);
    for(int i=0;i<2;i++){
        printf("%s",(lista+i)->nombre);
    }
    eEmpleado* punteroEmpleado;
    punteroEmpleado= &unEmpleado;
    /*printf("%d\n",punteroEmpleado->legajo);
    printf("%s\n",punteroEmpleado->nombre);
    printf("%c\n",punteroEmpleado->sexo);
    printf("%d\n",punteroEmpleado->sueldo);
    */
 /*//ejemplo5
    char mensaje[]="hola mundo";
    mostrarCadena(mensaje);
*/

 /* //ejemplo4
  char sexo;
  getChar("ingrese sexo:",&sexo);
  printf("el sexo es %c\n",sexo);

*/

    //ejemplo 3
    /*int numeros[]={3,5,2,4,3};

    /*for(int i=0; i<5;i++){
        printf("%x\n",*(vec+i));

    }*//*

    mostrarVector1(numeros;TAM);
    mostrarVector2(numeros;TAM);
    mostrarVector3(numeros;TAM);
    mostrarVector4(numeros;TAM);

/*


   //ejermplo 2
   /*int x=10;
   int* p = &x;
   int* q = p;
   int** r=&p;
  printf("%d",**r);
    */

   // ejemplo 1
   /*int x=10;
   int* p = &x;
   printf(" dirrecion de memoria x=:%x\n",&x);
   printf(" desp de llamar a funcion x=:%d\n",x);
   leerPuntero(&x);
   printf(" antes de llamar a funcion x=:%d\n",x);
    */
    return 0;
}//ejemplo1
/*void leerPuntero(int* p){
    printf(" dirrecion de memoria p=:%x\n",p);
    *p=38;
}//ejemplo 3
void mostrarVector1(int vec[],int tam){
    for(int i =o;i<tam;++){
        printf("%d",vec[i]);
    }
    printf("\n")
}
void mostrarVector2(int vec[],int tam){
    for(int i =o;i<tam;++){
        printf("%d",*(vec[]+i));
    }
    printf("\n")
}
void mostrarVector3(int* vec[],int tam){
for(int i =o;i<tam;++){
        printf("%d",vec[i]);
    }
    printf("\n")
}
void mostrarVector4(int* vec[],int tam){
for(int i =o;i<tam;++){
        printf("%d",*(vec+i));
    }
    printf("\n")
}
*/
//ejemplo 4
void getChar(char* message,char* caracter){
    printf("%s",message);
    fflush(stdin);
    scanf("%c",caracter);
}
void mostrarCadena(char*cadena){
    while(*cadena!='\0'){
        printf("%c",*cadena);
        cadena++;
    }

}
