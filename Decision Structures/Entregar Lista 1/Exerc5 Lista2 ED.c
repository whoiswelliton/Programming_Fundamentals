#include <stdio.h>
#include <stdlib.h>
/*
Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
	Renda anual
Al�quota*
Dedu��o**
At� R$ 10000,00
0%
Isento
> R$ 10000,00 e <= R$ 25000,00
10%
R$ 1000,00
Acima de R$ 25000,00
25%
R$ 4750,00
	*Al�quota � o percentual para o c�lculo do valor a ser pago.
	**Dedu��o � o valor deduzido do valor calculado a ser pago.
	Se informado valor negativo n�o realizar o c�lculo e informar o usu�rio.
	*/
int main (void)
{
    float Imposto,RendaAnual;

    printf("Informe a Renda Anual: ");
    scanf("%f",&RendaAnual);

    if (RendaAnual <= 0)
    {
        printf("Valor Invalido");
    }
    else if (RendaAnual <= 10000)
    {
        printf("Isento");
    }
    else if (RendaAnual > 10000 && RendaAnual < 25000)
    {
        Imposto = (RendaAnual*10/100) - 1000;
        printf("Imposto sera de: %.2f\n",Imposto);
    }
    else
    {
        Imposto = (RendaAnual*25/100) - 4750;
        printf("Imposto sera de: %.2f\n",Imposto);
    }

    system("pause");
}
