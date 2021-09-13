#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

/*
Elaborar uma fun��o para calcular o mdc (maior divisor comum) entre dois n�meros. Os n�meros s�o lidos na fun��o chamadora e passados
como par�metro para a fun��o que calcula o mdc. Esta fun��o retorna o mdc para a fun��o chamadora.
*/
int main (void)
{
    int Num1,Num2,Retorno;
    char Continuar;

    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("                              Calculadora de MDC");
        printf("\n_______________________________________________________________________________\n");
        printf("Informe o Primeiro Numero: ");
        scanf("%d",&Num1);
        printf("\n_______________________________________________________________________________\n");
        printf("Informe o Segundo Numero: ");
        scanf("%d",&Num2);

        system("cls");

        Retorno = MDC (Num1,Num2);

        printf("\n_______________________________________________________________________________\n");
        printf("\nO Maior Divisor Comum (MDC) entre os 2 numeros informados %c = %d",130,Retorno);

        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
