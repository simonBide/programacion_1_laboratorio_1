#include <stdio.h>
#include <stdlib.h>

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
            printf("1. Ingresar 1er operando \n");
            scanf("%f",&numeroUno);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            seguir = 0;
            break;
        default:
            break;


        }
    }while(seguir)

