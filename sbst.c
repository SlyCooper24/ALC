#include <stdio.h>

int main ()
{

    //int numerodelinhas,numerodecolunas;
    //numerodelinhas = 3;
    //numerodecolunas = 3;

    //float soma,a[numerodelinhas][numerodecolunas],b[numerodecolunas],x[numerodelinhas];
    
    //SubsParaTras(3, 3, )
    
    
    
    return 0;
}


void SubsParaTras(int numerodelinhas, int numerodecolunas, float MatrizA[numerodelinhas][numerodecolunas])
{
    float VetorResultados[numerodecolunas], VetorIncognitas[numerodelinhas];
    VetorIncognitas[numerodelinhas - 1] = (VetorResultados[numerodecolunas - 1] / MatrizA[numerodelinhas - 1][numerodecolunas - 1]);
    int soma = 0;
    for(int linhaatual = numerodelinhas - 2; linhaatual >= 0; linhaatual--)
    {
        for(int colunaatual = linhaatual + 1; colunaatual != numerodecolunas; colunaatual++)
        {
            soma += MatrizA[linhaatual][colunaatual] * VetorIncognitas[colunaatual];
        }
        VetorIncognitas[linhaatual] = ((VetorResultados[linhaatual] - soma) / MatrizA[linhaatual][linhaatual]);
    }
    for(int linhaatual = 0; linhaatual < numerodelinhas; linhaatual++)
    {
        printf("o valor de x%d e: %.2f\n",linhaatual + 1, VetorIncognitas[linhaatual]);
    }
}
