#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que leia o pre�o de uma mercadoria com diferen�a de um m�s e calcule a taxa de
infla��o (ou defla��o) mensal dessa mercadoria.
*/

int main (void)
{
    float MP, MA, Inflacao;

    printf("Informe o valor da mercadoria no Mes Passado: ");
    scanf("%f",&MP);
    printf("Informe o valor da mercadoria no Mes Atual : ");
    scanf("%f",&MA);

    Inflacao=((MP - MA)*100)/MP;

    printf("A taxa de inflacao ou deflacao e de: %.2f%%\n",Inflacao);

    system("pause");
}
