#include <stdio.h>
#include <stdlib.h>

/*
Elaborar um algoritmo que l� dois valores, verifica se o primeiro � m�ltiplo do segundo e escreve a mensagem �S�o m�ltiplos� ou �N�o s�o m�ltiplos�
dependendo da condi��o. Verificar para que n�o seja realizada uma divis�o por zero. Nesse caso, informar que n�o � poss�vel realizar uma divis�o por zero.
*/
int main (void)
{
    int Num1,Num2;
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe o primeiro numero: ");
        scanf("%d",&Num1);
        printf("\n________________________________________________________________________________\n");
        printf("Informe o segundo numero: ");
        scanf("%d",&Num2);
        system("cls");

        if(Num1 % Num2 == 0)
        {
            printf("Sao multiplos!");
        }
        else
        {
            printf("N�o sao multiplos!");
        }

        printf("\n_________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
