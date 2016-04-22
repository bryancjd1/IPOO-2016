#include<stdio.h>

void mostrar_matriz(int f,int c,int **a);
void multiplicacion_matriz(int **a, int **b, int **c, int fila1, int fila2, int columna2);
int ** espacio_matriz(int p,int q);
int main()

{
    int i=0, j=0, fila1, fila2, columna1, columna2;
    int **a, **b, **c;
    printf("Filas matriz 1\n");
    scanf("%d", &fila1);
    printf("Columnas matriz 1\n");
    scanf("%d", &columna1);
    printf("Filas matriz 2\n");
    scanf("%d", &fila2);
    printf("Columnas matriz 2\n");
    scanf("%d", &columna2);

    if(columna1 == fila2)

    {
        a = espacio_matriz(fila1,columna1);
        b = espacio_matriz(fila2,columna2);
        c = espacio_matriz(fila1,columna2);
        for(i=0;i<fila1;i++)
            for(j=0;j<columna2;j++)
                 c[i][j]=0;

        printf("Ingrese matriz 1\n");

        for(i=0; i<fila1; i++)
        {
            for(j=0; j<columna1; j++)
            {
                printf("a[%d][%d]\n", i, j);
                scanf("%d", (*(a+i)+j));
            }
        }
        printf("Ingrese matriz 2\n");

        for(i=0; i<fila2; i++)
        {
            for(j=0; j<columna2; j++)
            {
                printf("b[%d][%d]\n", i, j);
                scanf("%d", (*(b+i)+j));
            }
        }
        multiplicacion_matriz(a, b, c, fila1, fila2, columna2);

    }
    else

        printf("Estas matrices no se pueden multiplicar\n");

return 0;

}

void mostrar_matriz(int f,int c,int **a){
    int i,j;
      for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf("%d\t",*(*(a+i)+j));
           }
        printf("\n");
        }
 }

void multiplicacion_matriz(int **a, int **b, int **c, int fila1, int fila2, int columna2)

{
    int i, j, k;
    for(i=0; i<fila1; i++)
    {
        for(j=0; j<columna2; j++)
        {
            for(k=0; k<fila2; k++)
            {
                *(*(c+i)+j) = *(*(c+i)+j) + *(*(a+i)+k) * *(*(b+k)+j);
            }
        }
    }
    mostrar_matriz(fila1, columna2,c);
}
int ** espacio_matriz(int p,int q)
{
    int ** m , j;
    m =(int **)malloc(sizeof(int *)*p);
    for(j=0;j<p;j++)
        m[j]=(int *)malloc(sizeof(int)*q);
    return m;
}
