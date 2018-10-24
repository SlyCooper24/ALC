#include <stdio.h>

int main ()
{

    int linhas,colunas;
    linhas = 3;
    colunas = 3;

    float soma,a[linhas][colunas],b[colunas],x[linhas];

    for ( int i = 0; i<linhas; i++ )
    {
        for ( int j = 0; j<colunas; j++ )
        {
            printf ("Elemento de A[%d][%d] = ", i, j);
            scanf ("%f", &a[ i ][ j ]);
        }
    }

    if(a[linhas - 1][0] != 0)
    {
        printf("A matriz nao e triangular inferior");
        return 0;
    }

    for(int i = 0; i<colunas; i++)
    {
        printf ("Elemento de B[%d] = ", i);
        scanf("%f", &b[ i ]);
        x[i] = 0;
    }
    x[linhas - 1] = (b[colunas - 1]/a[linhas - 1][colunas - 1]);
    for(int i = linhas-2; i>=0; i--)
    {
        soma = 0;
        for(int j = i+1; j != colunas; j++)
        {
            soma += a[ i ][ j ] * x [ j ];
        }
        x[ i ] = ((b[ i ] - soma)/a[ i ][ i ]);
    }

    for(int i = 0; i<linhas; i++)
    {
        printf("o valor de x%d e: %.2f\n",i+1,x[i]);
    }
}
