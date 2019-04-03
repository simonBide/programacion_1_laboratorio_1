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
    int acumulador = 0;
    int numero = (int)numeroFloat;
    for(int contador = 1 ;numero >= contador ;contador++)
    {
     acumulador += numero*contador;
    }
    return acumulador;
}
