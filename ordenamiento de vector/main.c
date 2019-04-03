#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()

{
    int vec[5]={7,5,6,2,8};
    int aux;
    for(int i=0; i<CANT -1;(i++)){
        for(int j=i+1;j<CANT;j++){
            if(vec[i]>vec[j]){
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }
    for(int i=0;i<CANT;i++)
    {
        printf("%d",vec[i]);
    }
    return 0;
}
