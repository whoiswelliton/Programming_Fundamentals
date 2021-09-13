#include <stdio.h>
#include <stdlib.h>

/*
Ler um n�mero inteiro longo (long int) que representa segundos e convert�-lo para horas, minutos e segundos.
 Mostrar a quantidade de horas minutos e segundos obtidos.
Observa��o:
//declarar uma vari�vel inteiro longo
long int Num;
//ler uma vari�vel inteiro longo
scanf(�%li�,&Num);
//mostrar o conte�do de uma vari�vel inteiro longo
printf(�valor %li�,Num);

*/
int main (void)
{
    char Continuar;
    float Hora,Min,Seg,Seg2;

    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe um numero inteiro que represente uma quantidade de segundos: ");
        scanf("%f",&Seg);

        system("cls");

        Hora = (int)Seg/3600;
        Min = (int)Seg % 3600 / 60;
        Seg2 = (int) Min % 1;

        printf("\n %.2f Segundos = %.0f Horas,%.0f Minutos,%.0f Segundos ",Seg,Hora,Min,Seg2);

        printf("\n_______________________________________________________________________________\n\n");
        printf("\n                          Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
