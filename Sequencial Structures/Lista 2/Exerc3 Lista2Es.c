#include <stdio.h>
#include <stdlib.h>
/*
O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de f�brica). Supondo que a percentagem do
distribuidor � de 12% e os impostos s�o de 45%. Escrever um algoritmo para, a partir do custo de
f�brica do carro, calcular e mostrar o custo ao consumidor. Ao inv�s de usar valor fixo, solicitar
para o usu�rio informar os valores para os percentuais.
*/
int main (void)
{
    float Imposto, PCon;
    float CFab,CCon;

    printf("Informe o valor do custo de f�brica: ");
    scanf("%f",&CFab);
    printf("Informe o valor do Imposto: ");
    scanf("%f",&Imposto);
    printf("Informe o valor do Percentual do Consumidor: ");
    scanf("%f",&PCon);

    CCon = (CFab*Imposto/100)+ (CFab*PCon/100) + CFab;

    printf("O Custo Ao Consumidor �: %.2f\n",CCon);

    system("pause");
}
