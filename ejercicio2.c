#include <stdio.h>

int main()
{
    int m = 5; //Número de Renglones
    int n = m; //Número de Renglones = Número de Columnas 
    int i, j;
    int matriz[m][n];

    for(i = 0; i < m; i++) //Recorrido del arreglo por renglón.
{
    for(j = 0; j < n; j++) 
    {
        if(i != j) //Si y solo si i sea diferente de j imprime 0.
        printf("0");
        else 
        printf("1"); //Si no, imprime 1,
    }
    printf("\n"); //Espacio para dar forma de matriz.
}
    return 0;
}