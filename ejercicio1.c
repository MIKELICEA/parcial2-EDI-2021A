#include<stdio.h>
int main()
{
int m = 3; //Número de Renglones
int n = 3; //Número de Columnas 
int i, j;
float matriz [m][n];
float suma = 0;
float promedio;

for(i = 0; i < m; i++) //Captura de Datos por Renglón
{
    for(j = 0; j < n; j++) 
    {
        printf("matriz[%d][%d]: ", i, j);
        scanf("%f", &matriz[i][j]);
    }
}

for(j = 0; j < n; j++) //Recorrido por Columna para calcular promedio
{
    for(i = 0; i < m; i++)
    {
        suma = suma + matriz[i][j];
    }
    
    promedio = suma / m; //Cáculo de Promedio
    printf("Promedio Columna %d: %0.2f \n", j+1, promedio );
    suma = 0; //Reset de valor de suma
}

return 0;
}