#include <stdio.h>
#include <stdlib.h>
/*
Elaborar um algoritmo que l� dois valores, verifica se o primeiro � m�ltiplo do segundo e escreve a
mensagem �S�o m�ltiplos� ou �N�o s�o m�ltiplos� dependendo da condi��o. Verificar para que n�o seja
realizada uma divis�o por zero. Nesse caso, informar que n�o � poss�vel realizar uma divis�o por zero.
*/
int main (void)
{
    int Num1,Num2;

    printf("Informe o valor maior: ");
    scanf("%d",&Num1);
    printf("Informe o valor menor: ");
    scanf("%d",&Num2);

    if (Num2 == 0)
    {
        printf("Divis�o por zero\n");
    }
    else// � possivel realizar a divis�o
    {
        if(Num1 % Num2 == 0)
        {
           printf("%d e multiplo de %d\n",Num1,Num2);
        }
        else
        {
           printf("%d nao e multiplo de %d\n",Num1,Num2);
        }
    }
    system("pause");
}
