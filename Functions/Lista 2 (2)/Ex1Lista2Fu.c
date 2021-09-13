#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

/*
Fazer um programa para dado n e p inteiros e maiores que zero, calcular as combina��es de n elementos p a p, isto � n!/(p! * (n-p)!).
Utilizar a fun��o do fatorial para implementar a f�rmula. A fun��o dever� ser inclu�da com #include <Arquivofuncao.h>
*/
int main (void)
{
    char Continuar,Opcao;
    int N,P,Re;
    do
    {
        system("cls");

        do
        {
            printf("\n_______________________________________________________________________________\n");
            printf("\nInforme o o valor de N:");
            scanf("%d",&N);
        }while(N < 0);
        do
        {
            printf("\n_______________________________________________________________________________\n");
            printf("\nInforme o o valor de P:");
            scanf("%d",&P);
        }while(P < 0);

        system("cls");

        Re = Fatorial(N) / (Fatorial(P) * Fatorial(N - P));

        printf("\nO resultado da Formula N!/(P! * (N-P)!) = %d",Re);

        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
