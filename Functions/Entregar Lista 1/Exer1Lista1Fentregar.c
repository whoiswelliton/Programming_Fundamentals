#include <stdio.h>
#include <stdlib.h>
#include <Pause.h>
#include "Funcao1.h"

/*
) Fazer um programa que leia um n�mero que � o limite superior de um intervalo e outro n�mero que � o
incremento.Passar esses dois valores como par�metros de uma fun��o que imprime todos os n�meros naturais de
0 at� o limite superior informado, com o incremento informado. Por exemplo, informado 11,
como limite superior, e 2, como incremento, a fun��o imprime: 0, 2, 4, 6, 8, 10.
*/

int main (void)
{
    do
    {
        system("cls");
        int Naturais;
        int LimSup,Incre;

            printf("Informe o limite Superior: ");
            scanf("%d",&LimSup);
            printf("Informe o Incremento: ");
            scanf("%d",&Incre);

        Naturais = Funcao1(LimSup);

        printf("Valores Naturais do Intervalo: %d\t",Naturais);

        Pause();
        printf("\nExecutar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}

