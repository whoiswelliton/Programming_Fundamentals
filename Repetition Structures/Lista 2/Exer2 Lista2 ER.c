#include <stdio.h>
#include <stdlib.h>
/*
Utilizando uma estrutura de repeti��o, ler 3 pares de valores informados pelo usu�rio.
Para cada par de valores, dividir o primeiro valor informado pelo segundo e apresentar o
resultado com duas casas decimais. Se o usu�rio informar zero para o valor que ser� o divisor,
mostrar uma mensagem que n�o � poss�vel efetuar a divis�o.
*/
int main (void)
{
    float Num1,Num2,Div;
    int Cont;

    for (Cont=1;Cont<=3;Cont++)
    {
        printf("Informe o primeiro numero: ");
        scanf("%f",&Num1);
        printf("Informe o segundo numero: ");
        scanf("%f",&Num2);

        if (Num2!=0)
        {
            Div=Num1/Num2;
            printf("%.2f \ %.2f = %.2f\n",Num1,Num2,Div);
        }
        else
        {
        printf("Impossivel dividir por zero!\n");
        }
    }

    system("pause");
}
