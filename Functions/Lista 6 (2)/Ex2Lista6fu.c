#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

/*
Implementar uma fun��o que � uma calculadora que realiza opera��es de adi��o, subtra��o, multiplica��o
e divis�o apenas utilizando somas. A fun��o recebe como par�metros os valores e o operador, retornar o
resultado.
*/
int main (void)
{
    int Num1,Num2,Retorno;
    char Continuar,Opcao;
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("Informe o primeiro Numero: ");
        scanf("%d",&Num1);
        printf("Informe o segundo Numero: ");
        scanf("%d",&Num2);
        printf("_______________________________________________________________________________\n");

        system("cls");

        printf("\n_______________________________________________________________________________\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("\n_____________________________________________________________________________\n");
        printf("Escolha uma opcao: ");
        fflush(stdin);
        scanf("%c",&Opcao);

        printf("\nResultado da operacao: %.2f",Calculadora(Num1,Num2,Opcao));

        printf("\n_____________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
