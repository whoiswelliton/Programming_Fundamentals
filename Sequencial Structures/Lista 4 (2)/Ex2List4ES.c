#include <stdio.h>
#include <stdlib.h>

/*
Ler dois n�meros inteiros (armazen�-los em vari�veis do tipo int).
 Dividir o primeiro desses n�meros pelo segundo,
 obter e mostrar separadamente (N�o utilizar fun��es matem�ticas prontas):
a) a parte inteira do n�mero resultante.
b) a parte decimal desse n�mero resultante com tr�s casas decimais.
c) a parte decimal como um n�mero inteiro de tr�s d�gitos.
Por exemplo:
Lidos: 20 e 3
Parte inteira: 6
Parte decimal: 0.666 ou 0.667 (se mostrado com arredondamento estat�stico)
Parte decimal como um inteiro de dois d�gitos: 666

*/
int main (void)
{

    int Num1,Num2;
    float Num3,Int,Deci,Deci2;
    char Continuar;
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("Informe o primeiro Numero: ");
        scanf("%d",&Num1);
        printf("\n_______________________________________________________________________________\n");
        printf("Informe o segundo Numero: ");
        scanf("%d",&Num2);

        system("cls");

        Num3 = (float)Num1/Num2;
        Int = (int)Num3;
        Deci = Num3 - (int)Num3;
        Deci2 = Deci * 1000;

        printf("\n Lidos: %d e %d",Num1,Num2);
        printf("\nA parte inteira do numero resultante: %0.f",Int);
        printf("\nA parte decimal desse numero resultante com tres casas decimais: %.3f",Deci);
        printf("\nA parte decimal como um numero inteiro de tres digitos: %.0f",Deci2);

        printf("\n_______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
