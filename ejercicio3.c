#include <stdio.h>

int main()
{
    int m = 3; //Número de renglones
    int n = 2; //Número de columnas
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

printf("\n"); 
printf("Matriz Orginal\n"); //Imprimir Matriz Orginal

    for(i = 0; i < m; i++) 
{
    for(j = 0; j < n; j++) 
    {
        printf("%d", matriz[i][j]);
    }
    printf("\n");
}
printf("\n");
printf("Matriz Transpuesta\n"); //Imprimir Matriz Transpuesta

    for(i = 0; i < n; i++) 
{
    for(j = 0; j < m; j++) 
     {
        printf("%d", matriz[j][i]);
    }
    printf("\n");
}

printf("\n");
return 0;

}