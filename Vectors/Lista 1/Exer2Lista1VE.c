#include <stdio.h>
#include <stdlib.h>
#include "Pause.h"
#include "Vetores1.h"

/*
Gerar um arquivo de cabe�alho com uma fun��o para gerar um vetor com n�meros aleat�rios,
com determinado tamanho e em uma determinada faixa de valores e com outra fun��o para mostrar
 um vetor com tamanho n�o fixo.
Utilizar essas fun��es para gerar um vetor de valores rand�micos com a quantidade de elementos
informada pelo usu�rio. Validar a entrada para que seja informado um valor positivo para o
tamanho do vetor. Mostrar o vetor. Encontrar o menor entre os elementos gerados e armazenados
no vetor e fazer a m�dia dos pares que est�o no vetor. Validar para que n�o seja realizada
uma divis�o por zero.
O programa permanecer� em execu��o at� que seja escolhida a op��o sair ou alguma equivalente.
*/

int main (void)
{
    char Continuar;
    int Tam,Menor,SomaPares,Qtpares,i;
    float Media;

    do
    {
        system("cls");
        SomaPares=0;
        Qtpares=0;

        printf("________________________________________________________________________________\n");
        do
        {
            printf("\nInforme o tamanho do vetor: ");
            scanf("%d",&Tam);

        }while(Tam <=0);
        printf("\n");
        int Vet[Tam];

        //void GererVetor(int Vetor[], int Tamanho, int Divisor)
        GerarVetor(Vet,Tam,20);

        //void MostrarVetor (int Vetor[1], int Tamanho)
        MostrarVetor(Vet,Tam);

        Menor = Vet [0];
        for(i=0;i<Tam;i++)
        {
            if(Vet[i] < Menor)
            {
                Menor = Vet[i];
            }
            if (Vet[i] % 2 == 0)
            {
                SomaPares = SomaPares + Vet[i];
                Qtpares++;
            }
        }
        printf("\n");
        if(Qtpares != 0)
        {
            Media = (float)SomaPares/Qtpares;
            printf("\nMedia dos Pares: %.2f\n",Media);
        }

        printf("\n\nO Menor Valor do vetor: %d\n",Menor);
        printf("________________________________________________________________________________\n");
        printf("\n                      Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
    Pause();
}
