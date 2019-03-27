#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int result=1;
    int z;
    printf("\nIngrese numero:");
    scanf("%d",&z);

    if(z<0)
    {
       printf("\nerror");
       return 0;
    }
    else
    {
         for( i=1;  i<=z ; i++ )
        {
        result*=i;

        }

    }

    printf("\nEl factorial de %d es %d",z,result);
 return 0;
}

