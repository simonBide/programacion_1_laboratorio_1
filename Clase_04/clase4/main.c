#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numero;
    utn_getNumber(&numero , 100 , 1 , "Ingrese un numero: " , "Error.Reingrese un numero: \n");
    printf("%d",numero);
    return 0;
}
