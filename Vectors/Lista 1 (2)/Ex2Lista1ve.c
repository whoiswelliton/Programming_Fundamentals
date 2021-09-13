#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Vetores.h"

/*
Gerar um arquivo de cabe�alho com uma fun��o para gerar um vetor com n�meros aleat�rios,
 com determinado tamanho e em uma determinada faixa de valores e com outra fun��o para mostrar
 um vetor com tamanho n�o fixo.
Utilizar essas fun��es para gerar um vetor de valores rand�micos com a quantidade de elementos
 informada pelo usu�rio. Validar a entrada para que seja informado um valor positivo para o
 tamanho do vetor. Mostrar o vetor. Encontrar o menor entre os elementos gerados e armazenados
 no vetor e fazer a m�dia dos pares que est�o no vetor. Validar para que n�o seja realizada
 divis�o por zero no c�lculo da m�dia.
*/
int main (void)
{
    char Continuar;
    int Qtdelementos,i;
    do
    {
        int Menor=100,Soma=0,Qtd=0;
        float Media;
        system("cls");
        do
        {
            printf("\n_______________________________________________________________________________\n");
            printf("Informe a quantidade de elementos do vetor: ");
            scanf("%d",&Qtdelementos);

        }while(Qtdelementos < 0);

        int Vetor[Qtdelementos];

        GerarVetor (Vetor,Qtdelementos,100);

        MostrarVetor (Vetor,Qtdelementos);

        for(i=0;i<Qtdelementos;i++)
        {
            if(Menor > Vetor[i])
            {
                Menor = Vetor[i];
            }
            if(Vetor[i] % 2 == 0)
            {
                Soma = Soma + Vetor[i];
                Qtd++;
            }
        }

        if(Qtd > 0)
        {
             Media = (float)Soma/Qtd;
        }

        printf("\n_______________________________________________________________________________\n");
        printf("Menor: %d",Menor);
        printf("\n_______________________________________________________________________________\n");
        printf("Media dos pares: %.2f",Media);


        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
