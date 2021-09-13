#include <stdio.h>
#include <stdlib.h>
#include "Vetores.h"
/*
Gerar aleatoriamente um vetor com 100 elementos que conter� somente valores 0 e 1. Mostrar esse vetor.
Em seguida contar quantos 0s sucessivos o vetor cont�m, armazenar essa quantidade em outro vetor e mostr�-lo.
Qual seria o tamanho m�nimo e m�ximo desse vetor que armazena as quantidades? Cri�-lo para  a tamanho m�ximo
poss�vel.
Exemplo
Vetorgerado: 00010011111000
VetorQuatidades:323 (os tr�s primeiros zeros,os dois zeros subsequentes e os tr�s zeros no final)
*/
int main (void)
{
    char Continuar;
    int i,VetA[100],VetB[100];

    do
    {
        int Qtd=0,Qtd2=0,j=0;

        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("VETOR A:\n");

        GerarVetor(VetA,100,1);
        MostrarVetor(VetA,100);

        for(i=0;i<100;i++)
        {
            if(VetA[i] == 0)
            {
                while(VetA[i] == 0)
                {
                    Qtd++;
                    i++;
                }
            }
            else if (Qtd >= 2)
            {
                VetB[j] = Qtd;
                Qtd=0;
                j++;
            }
        }

        printf("\n_______________________________________________________________________________\n");
        printf("VETOR B(Zeros Consecutivos):\n");
        MostrarVetor(VetB,j);

        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}



