#include <stdio.h>
#include <stdlib.h>
/* Escreva um algoritmo que calcule o valor da convers�o em d�lares de um valor lido em reais.
 O algoritmo dever� ler o valor da cota��o do d�lar e a quantidade de reais.
*/

int main (void)
{
    float Dolar, Real;
    float CotaD;

    printf("Informe o valor em Reais: ");
    scanf("%f",&Real);
    printf("Informe o valor da Cota��o do Dolar: ");
    scanf("%f",&CotaD);

    Dolar = Real*CotaD;

    printf("O Valor Em Dolares � de: %.2f\n",Dolar);

    system("pause");
}


