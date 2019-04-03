#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float funcionSuma (float numeroUno,float numeroDos)
{
   // float resultado = numeroDos + numeroUno;
   // return resultado;
   return (numeroUno + numeroDos);
}
float funcionResta (float numeroUno,float numeroDos)
{
    return (numeroUno - numeroDos);
}
float funcionMultiplicar (float numeroUno,float numeroDos)
{
    return (numeroUno * numeroDos);
}
float funcionDividir (float numeroUno,float numeroDos)
{
    if( numeroDos != 0 )
    {
        return (numeroUno / numeroDos);
    }
    else
    {
        return -1;
    }
}
float funcionFactorial ( float numeroFloat )
{
    int resultado =1;
    int  numero_entero = (int)numeroFloat;
    int aux;

     while(numero_entero != numeroFloat){
        return -1;
     }

        for(aux = 1; aux <= numero_entero; aux++){
            resultado = resultado * aux;
     }
return resultado;
}
