#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia o valor de uma aplica��o, o percentual de rendimento mensal obtido por esta
aplica��o e o per�odo do investimento; e retorne o valor da aplica��o ao final do per�odo de investimento.
 Obs.: a cada 12 meses o percentual de rendimento deve ser aumentado em 0,25%.
*/
int main (void)
{
    float Apl,perc,Aux;
    int Meses,Meses2=0;
    char Continuar;
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("Informe o valor da sua aplicacao: ");
        scanf("%f",&Apl);
        printf("\n_______________________________________________________________________________\n");
        printf("Informe o percentual de rendimento mensal: ");
        scanf("%f",&perc);
        printf("\n_______________________________________________________________________________\n");
        printf("Informe o periodo de investimento em meses: ");
        scanf("%d",&Meses);

        do
        {
            Apl = Apl + (Apl * perc / 100);
            if(Meses2 % 12 == 0)
            {
                perc = perc + 0.25;
            }
            Meses2++;

        }while(Meses2 <= Meses);

        printf("O resultado final do investimeto sera: RS %.2f",Apl);

        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
