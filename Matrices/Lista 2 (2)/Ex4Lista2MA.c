#include <stdio.h>
#include <stdlib.h>
#include "Vetores.h"


/*
Gerar e mostrar uma matriz cujo conte�do e a popula��o dos 10 munic�pios mais populosos de cada uma das
cinco regi�es brasileiras, sendo Populacao[i,j] o elemento que armazena a popula��o do j-�simo munic�pio
do i-�simo estado. Em seguida:
a) Determinar e mostrar o n�mero do munic�pio mais populoso e o n�mero da regi�o a que
pertence;
b) Calcule a m�dia da popula��o de cada regi�o. Armezene esses valores em um vetor.

*/
int main (void)
{
    int Matriz[5][10],i,j,k,Maior,regiao,Vet[5],mun,Soma;
    float Media;
    char Continuar;
    do
    {
        system("cls");
        srand(time(NULL));
        printf("\n____________________________________________________________________________\n");
        k=0;
        Maior=0;

        for(i=0;i<5;i++)
        {
            printf("\nRegiao %d:\n",i);
            for(j=0;j<10;j++)
            {
                Matriz[i][j] = rand();
                printf("%d  ",Matriz[i][j]);
            }


        }

        for(i=0;i<5;i++)
        {
            Soma=0;
            Media=0;

            for(j=0;j<10;j++)
            {
                if(Matriz[i][j] > Maior)
                {
                    mun = j;
                    regiao = i;
                    Maior = Matriz[i][j];
                }

                Soma = Soma + Matriz[i][j];

            }
            Media = (float)Soma/10;
            Vet[k]= Media;
            k++;

        }

        printf("\n\nO municipio mais populoso e %d e pertence a regiao %d\n",mun,regiao);

        printf("\n\nMedia de Cada regiao em um vetor:\n");
        MostrarVetor(Vet,5);

        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}



