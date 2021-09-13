#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um programa para calcular a quantidade de fita necess�ria, em cent�metros, para amarrar um pacote com
 duas voltas, sendo uma pela largura e outra pelo comprimento do pacote. Ser�o fornecidas a largura,
 a altura e o comprimento do pacote. Para amarrar as pontas da fita s�o necess�rios 15 cm de fita em
 cada ponta. A Figura ilustra a maneira como a fita � passada no pacote.
*/
int main (void)
{
    char Continuar;
    int Largura,Altura,Comprimento,Total;

    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe a Largura do pacote: ");
        scanf("%d",&Largura);
        printf("Informe a Altura do pacote: ");
        scanf("%d",&Altura);
        printf("Informe o comprimento do pacote: ");
        scanf("%d",&Comprimento);

        system("cls");

        Total = (((Altura+Comprimento)*2) + ((Largura+Altura)*2)) + 15;

        printf("\nO Tamanho da fita utilizada deve ser: %dcm ",Total);

        printf("\n_______________________________________________________________________________\n\n");
        printf("\n                          Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
