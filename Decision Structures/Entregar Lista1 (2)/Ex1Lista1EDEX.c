#include <stdio.h>
#include <stdlib.h>

/*
Ler um n�mero e apresentar o seu m�dulo (n�mero sem sinal), isto �, se o n�mero � negativo apresent�-lo como
positivo.
*/
int main (void)
{
    float Num,Num2;
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe um Numero: ");
        scanf("%f",&Num);

        system("cls");

        if(Num < 0)
        {
            Num2 = Num*-1;
            printf("\nO Numero positivo sera: %.2f",Num2);
        }
        else
        {
            printf("\nO Numero positivo sera: %.2f",Num);
        }



        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
