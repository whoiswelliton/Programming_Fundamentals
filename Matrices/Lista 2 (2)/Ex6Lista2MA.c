#include <stdio.h>
#include <stdlib.h>
#include "Vetores.h"

/*
Gerar uma matriz 10 x 2  com valores menores que 6. A primeira linha � a base e a segunda o expoente.
 Utilizando a fun��o pot�ncia, gerar um vetor que armazena a pot�ncia obtida a partir dos valores desses
 dois vetores. A fun��o pot�ncia ser� utilizada para calcular o pot�ncia (base elevada a um expoente)
  e n�o para gerar o vetor. O valor obtido do c�lculo ser� armazenado no vetor. Mostrar como no exemplo:
VetA[0] = 3 e VetB [0] = 3 resultar� 27 (3 elevado a 3)
Mostrar o vetor pot�ncia conforme o exemplo:
3 ^ 3 = 27
*/
int main (void)
{
    int i,j,k;
    int Martiz[10][2],Vet;
    char Continuar;
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");

        for(i=0;i<10;i++)
        {
            for(j=0;j<2;j++)
            {
                Matriz[i][j] = rand % 7;
            }
        }

        for(i=0;i<j;i++)
        {
            Vet[k]
            k++;
        }


        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
