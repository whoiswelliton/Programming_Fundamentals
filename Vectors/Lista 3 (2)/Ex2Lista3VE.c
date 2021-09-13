#include <stdio.h>
#include <stdlib.h>
#include "Vetores.h"
#include "Funcoes.h"
/*
Gerar um vetor com cinco n�meros aleat�rios no intervalo entre 10 e 20, inclusive. Para cada n�mero exibir a sequ�ncia
dos pares de 2 at� o n�mero gerado e a soma desses pares.
Utilizar fun��o uma para mostrar pares e essa fun��o tem como retorno a quantidade de pares. Mostrar como na figura ao
 lado.
*/
int main (void)
{
    char Continuar;
    int Vet[5],i,retorno;
    do
    {
        system("cls");
        printf("\n______________________________________________________________________________\n");
        printf("VETOR:\n");

        GerarVetorLim(Vet,5,10,20);
        MostrarVetor(Vet,5);

        printf("\nPARES:\n");

        for(i=0;i<5;i++)
        {
            printf("%d ==> ",Vet[i]);
            retorno = pares(Vet[i]);
            printf("  Soma == %d",retorno);
            printf("\n");

        }



        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}


