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
    float Renda,Valor,Desc;
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Infore sua renda: ");
        scanf("%f",&Renda);

        system("cls");

        if(Renda > 0 && Renda <= 10000.00)
        {
            printf("Valor isento de impostos = %.2f",Renda);
        }
        else if(Renda > 10000.00 && Renda <= 25000.00)
        {
            Valor = ((Renda * 10)/100) - 1000;

            printf("Valor a ser descontado = %.4f , Sua Renda Liquida sera : %.2f",Valor,Renda-Valor);
        }
        else if(Renda > 25000.00)
        {
            Valor = ((Renda * 25)/100) - 4750;
            printf("Valor a ser descontado = %.4f , Sua Renda Liquida sera : %.2f",Valor,Renda-Valor);
        }
        else
        {
            printf("Informe valor positivo!");
        }

        printf("\n_______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
