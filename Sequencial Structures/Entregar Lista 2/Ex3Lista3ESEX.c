#include <stdio.h>
#include <stdlib.h>
#include <Pause.h>

/*
Faca um programa para calcular a quantidade necess�ria de latas de tinta para pintar uma parede com X metros
de largura por H metros de altura. Tamb�m � informada a altura e largura da porta e das janelas e a quantidade
 de janelas. As janelas possuem o mesmo tamanho. O usu�rio informa o consumo de tinta por metro quadrado e a
 quantidade de litros de tinta de uma lata. Indicar a quantidade inteira para o n�mero de latas de tinta
 necess�rio (arredondar o valor para o pr�ximo inteiro).
*/
int main (void)
{
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf(" ");
        printf("__________________________________________________________________________________\n");

        printf("_________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
    Pause();
}
