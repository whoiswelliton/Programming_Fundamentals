#include <stdio.h>
#include <stdlib.h>
#include "Pause.h"

/*
 Ler dois n�meros reais (ponto flutuante) e apresentar, sem utilizar fun��es matem�ticas prontas:
	a) A subtra��o do primeiro n�mero pelo segundo, mostrar o resultado com duas casas decimais e com arredondamento
	estat�stico.
	b) A divis�o do primeiro n�mero pelo sgundo, armazenando somente a parte inteira do n�mero.
	c) A soma dos dois n�meros com o resultado arredondado para o pr�ximo n�mero inteiro.
*/

int main (void)
{
    char Continuar;
    int Num1,Num2,Sub,Div,Soma;

    do
    {
        system("cls");
        printf("________________________________________________________________________________\n");
        printf("Informe o primeiro numero: ");
        scanf("%d",&Num1);
        printf("________________________________________________________________________________\n");
        printf("Informe o segundo numero: ");
        scanf("%d",&Num2);

        system("cls");

        Sub = Num1 - Num2;
        Div = Num1/Num2;
        Soma = Num1 + Num2 + 1;

        printf("\nSubtracao: %d",Sub);
        printf("\nDivisao: %d",Div);
        printf("\nSoma: %d",Soma);

        printf("\nPara Executar Novamente (S/s para sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);
    }while(Continuar == 's' || Continuar == 'S');
    Pause();
}

