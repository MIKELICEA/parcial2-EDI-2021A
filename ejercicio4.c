#include <stdio.h>
#define m 3  //Número de renglones
#define n 2 //Número de columnas
int BuscarNumMayor(int mat[m][n]);
int Renglon(int mat[m][n]);
int Columna(int mat[m][n]);

int main() 
{
    int mayor, renglon, columna;
    int matriz[m][n];
    int i, j;

    for(i = 0; i < m; i++) //Captura de Datos por Renglón
{
    for(j = 0; j < n; j++) 
    {
        printf("matriz[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}

mayor = BuscarNumMayor(matriz);
renglon = Renglon(matriz);
columna = Columna(matriz);

printf("El número mayor es %d y se encuentra en la posición [%d][%d]\n", mayor, renglon, columna);

return 0;

}

int BuscarNumMayor(int mat[m][n]) //Funcíon: Busqueda del número mayor
{
  int i, j;
  int mayor = 0;

 for(i = 0; i < m; i++) 
{
    for(j = 0; j < n; j++) 
    {
        if (mat[i][j] > mayor)
        {
        mayor = mat[i][j];
        }
    }
}    

return mayor;

}

int Renglon(int mat[m][n]) //Funcón: Renglon en el que se encuentra el número mayor
{
  int i, j;
  int renglon;
  int mayor = 0;

 for(i = 0; i < m; i++) 
{
    for(j = 0; j < n; j++) 
    {
        if (mat[i][j] > mayor)
        renglon = i;
    }
}    

return renglon;

}

int Columna(int mat[m][n])//Función: Columna en el que se encuentra el número mayor
{
  int i, j;
  int columna;
  int mayor = 0;

 for(i = 0; i < m; i++) 
{
    for(j = 0; j < n; j++) 
    {
        if (mat[i][j] > mayor)

        columna = j;
    }
}    
return columna;
}