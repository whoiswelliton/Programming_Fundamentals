#include <stdio.h>
#include <stdlib.h>
/*
Elaborar um programa que determine a pot�ncia de um n�mero. O usu�rio informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. N�o podem ser utilizadas fun��es prontas do C
 para fazer o c�lculo da pot�ncia, deve ser constru�do o algoritmo para isso. Por exemplo, o usu�rio informa
2 para base e 5 para expoente e o programa informa que o resultado � 32. Ou seja, 25 = 2 X 2 X 2 X 2 X 2 = 32.
*/
int main (void)
{
    int Base,Expo,Resul;

    printf("Informe uma Base: ");
    scanf("%d",&Base);
    printf("Informe um Expoente: ");
    scanf("%d",&Expo);
    do
    {
        printf("%d x\t",Base);
        Base=Expo*Base;
        Expo--;
    }while(Expo >= 1);

    printf("o Resultado �: = %d \n",Resul);

    system("pause");
}
