#include <stdio.h>
#include <stdlib.h>
/*
Faca um algoritmo que leia o sal�rio bruto mensal de um funcion�rio, calcule e mostre os valores
conforme o modelo.
Salario Bruto : R$
(-) IR (15%) : R$
(-) INSS (11%) : R$
(-) Sindicato (3%) : R$
Salario Liquido : R$
Observa��o: utilizar somente tr�s vari�veis: uma para para ler o sal�rio bruto, outra os descontos
e outra para o sal�rio l�quido:
*/

int main (void)
{
    float SalaB, Descontos, SalaL;

    printf("Informe o valor do sal�rio Bruto: ");
    scanf("%f",&SalaB);

    printf("Salario Bruto : R$ %.2f\n",SalaB);

    Descontos = SalaB*15/100;
    SalaL = Descontos;
    printf("(-) IR (15%) : R$ %.2f\n",Descontos);
    Descontos = SalaB*11/100;
    SalaL += Descontos;
    printf("(-) INSS (11%) : R$ %.2f\n",Descontos);
    Descontos = SalaB*3/100;
    SalaL += Descontos;
    printf("(-) Sindicato (3%) : R$ %.2f\n",Descontos);

    SalaL = SalaB - SalaL;

    printf("Salario Liquido : R$ %.2f\n",SalaL);



system("pause");
}
