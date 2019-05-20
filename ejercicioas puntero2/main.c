#include <stdio.h>
#include <stdlib.h>
typedef{
int legajo

}
int main()
{
   /*int* num;
    int* aux;

    num=(int*)malloc(sizeof (int));
        if(num==NULL){
            printf("no hay espacio");
            system("pause");
            exit(1);
        }

        for(int i=0;i<5; i++){
            printf("ingrese un numero");
            scanf("%d",num+i);
        }
        for(int i=0;i<5; i++){
            printf(" i= %d ",*(num+i));
        }
        aux=(int*)realloc(num, sizeof (int)*10);
        if(aux!=NULL){
            num=aux;
        }else{
            printf("no se pud conseguir espacio de memoria\n");
            exit(1);
        }
        printf("\n\n");
        for(int j=5;j<10; j++){
            printf("ingrese un numero\n");
            scanf("%d",num+j);
        }
        for(int i=0;i<10; i++){
            printf(" j= %d ",*(num+i));
        }



        /*printf("ingrese un numero\n");
        scanf("%d",num);
        printf("el numero es: %d\n",*num);
        */
    return 0;
}
