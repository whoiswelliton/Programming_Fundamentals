#include <stdio.h>
#include <stdlib.h>

/*
Escreva um algoritmo que gere a s�rie de Fibonacci at� o vig�simo termo. A s�rie de Fibonacci � formada pela
seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc.
*/
int main (void)
{
    int Cont,Num1=1,Num2=1,Soma=0;
    char Continuar;
    do
    {
        system("cls");
        printf("\n_________________________________________________________________________\n");
        printf("Serie de Fibonacci ate o 20 termo:\n\n");

        for(Cont=0;Cont<=20;Cont++)
        {
            Soma = Num1 + Num2;
            Num1 = Num2;
            Num2 = Soma;

            printf("%d \t",Soma);
        }

        printf("\n__________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
