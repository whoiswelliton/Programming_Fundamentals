#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo que dados a quantidade de litros de combust�vel gasto, os quil�metros percorridos
por um autom�vel e o valor do litro de combust�vel, calcule o gasto em combust�vel em reais por km.
*/

int main (void)
{
    float QLitros, QuiloP, ValorL, GReais;

    printf("Informe o valor do em litros do combustivel gasto: ");
    scanf("%f",&QLitros);
    printf("Informe o valor do litro de combustivel: ");
    scanf("%f",&ValorL);
    printf("Informe o valor de quilometros percorridos: ");
    scanf("%f",&QuiloP);

    GReais = (QLitros/QuiloP)*ValorL;

    printf("O gasto de combustivel em reais por KM foi de: %.2f\n",GReais);

    system("pause");
}
