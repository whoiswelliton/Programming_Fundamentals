#include <stdio.h>
#include <stdlib.h>
#include "Vetores.h"
/*
Gerar aleatoriamente 10 elementos para um vetor A e construir um vetor B de mesma dimens�o com os mesmos
 elementos de A, mas em ordem invertida, ou seja, o primeiro elemento de A ser� o �ltimo de B, o segundo
 elemento de A ser� o pen�ltimo de B e assim sucessivamente.
*/
int main (void)
{
    char Continuar;
    int VetA[10],VetB[10],i,j;
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("VETOR A:\n");

        GerarVetor(VetA,10,100);
        MostrarVetor(VetA,10);

        printf("\n_______________________________________________________________________________\n");
        printf("VETOR B:\n");

        for(i=0;i<10;i++)
        {
            VetB[i] = VetA[9-i];
        }

         MostrarVetor(VetB,10);

        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}

