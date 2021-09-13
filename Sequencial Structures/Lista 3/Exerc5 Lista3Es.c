#include <stdio.h>
#include <stdlib.h>
/*
Ler um n�mero inteiro longo (long int) que representa segundos e convert�-lo para horas,
minutos e segundos. Mostrar a quantidade de horas minutos e segundos obtidos.
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
    long int Segundos, Minutos, Horas;

    printf("Informe o valor de segundos: ");
    scanf("%li",&Segundos);

    Horas = Segundos/3600;
    Minutos = Segundos%3600/60;
    Segundos = Segundos%3600%60;

    printf("Total de horas e: %li\n",Horas);
    printf("Total de minutos e: %li\n",Minutos);
    printf("Total de segundos e: %li\n",Segundos);

    system("pause");
}
