
int maximo(int num1,int num2,int num3)
{
    int maximo;
    if( num1> num2 && num1>num3)
    {
        maximo=num1;
    }
    else
    {
        if( num2>= num1 && num2>num3)
        {
            maximo=num2;
        }
        else
        {
            maximo=num3;
        }
        return maximo;
}    }
