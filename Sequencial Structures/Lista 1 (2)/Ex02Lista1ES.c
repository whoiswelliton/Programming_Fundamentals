#include <stdio.h>
#include <stdlib.h>
#include "Pause.h"
/*Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada pelo atraso da presta��o. Calcule o valor a ser pago por meio da f�rmula:
 Atraso = Presta��o + (Presta��o * Taxa /100).
     Entrada
         Presta��o
         Taxa
     Processamento
         Atraso = Presta��o + (Presta��o * Taxa /100)
*/
int main (void)
{
    int Prestacao,Juros;
    float Atraso;
    char Continuar;

    do
    {
        system("cls");

        printf("________________________________________________________________________________\n");
        printf("Informe o Valor da Presta��o:");
        scanf("%d",&Prestacao);
        printf("________________________________________________________________________________\n");
        printf("Informe a Taxa de juros cobrada:");
        scanf("%d",&Juros);

        Atraso = (float)Prestacao + (Prestacao*Juros/100);

        system("cls");
        printf("________________________________________________________________________________\n");
        printf("Valor Total os juros cobrados %c: %.2f",130,Atraso);
        printf("\n________________________________________________________________________________\n");
        printf("\nPara executar novamente (S/s para sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);
    }while(Continuar == 'S' || Continuar == 's');
    Pause();
}
