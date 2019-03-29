#include<stdio.h>

int utn_getNumber(int* pNumero, int maximo, int minimo, char* msg, char* msgError)
{
    int numero;
    int ret=-1;
    int i=1;

        printf("%s",msg);
        scanf("%d",&numero);

        if(numero>0 && numero<100)
        {
            (*pNumero) = numero;
            ret = 0;
        }
        else
        {
            for(i=1;i<5;i++)
            {
            printf("%s",msgError);
            scanf("%d",&numero);
            }
        }

    return ret;
}

