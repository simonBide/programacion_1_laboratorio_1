#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float numeroUno = 0;
    float numeroDos = 0;
    int seguir = 1;
    int opcionUsuario;


    do
    {
        printf("1. Ingresar 1er operando (A=%.2f)\n",numeroUno);
        printf("2. Ingresar 2do operando (B=%.2f)\n",numeroDos);
        printf("3. Calcular todas las operaciones\n");
            //printf("a) Calcular la suma (A+B)";
            //printf("b) Calcular la resta (A-B)");
            //printf("c) Calcular la division (A/B)");
            //printf("d) Calcular la multiplicacion (A*B)");
            //printf("e) Calcular el factorial (A!)");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");

        scanf("%d",&opcionUsuario);

        switch(opcionUsuario)
        {
        case 1:
            printf("    Ingresar 1er operando: ");
            scanf("%f",&numeroUno);
            break;
        case 2:
            printf("    Ingresar 2do operando: ");
            scanf("%f",&numeroDos);
            break;
        case 3:
            printf("    Operaciones calculadas.\n");
            int fact = funcionFactorial(numeroUno);

            //if(fact==-1)
               // {
                    //printf("no se puede hacer factorial de un numero con decimales \n");
             //   }
           // else printf("el numero es %d \n ",fact);

            break;
        case 4:
            break;
        case 5:
            seguir = 0;
            break;
        default:
            printf("Opcion no valida. \n");
            break;


        }
    }while(seguir);
}

