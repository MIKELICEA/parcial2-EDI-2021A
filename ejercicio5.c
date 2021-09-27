#include <stdio.h>
#define n 5 //tamaño del arreglo

int main()
{

int i, j;
int m = n;
int matriz[m][n];
int simetrica = 0;

    for(i = 0; i < m; i++) //Captura de Datos por Renglón
{
    for(j = 0; j < n; j++) 
    {
        printf("matriz[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}

for(i = 0; i < m; i++) //Recorrido del arreglo
{
    for(j = 0; j < n; j++) 
    {
       
    if(matriz[i][j] != matriz[j][i])
        
        simetrica = 1;
    }
}

if (simetrica == 0)
{
printf("La matriz es simétrica\n");
}
else 
{
printf("La matriz no es simétrica\n");
}    
   
    return 0;
}