# include <stdio.h>
# include <stdlib.h>
/*
Considerando que para um cons�rcio sabe-se o n�mero total de presta��es, a quantidade de presta��es
pagas e o valor de cada presta��o (que � fixo). Escreva um programa que determine o valor total j�
pago pelo consorciado e o saldo devedor.
*/
int main (void)
{
    float NumP,PrestP,ValorP,ValorT,Saldo;

    printf("Informe a quantidade de prestacoes: ");
    scanf("%f",&NumP);
    printf("Informe a quantidade de prestacoes pagas: ");
    scanf("%f",&PrestP);
    printf("Informe o valor de cada Prestacao: ");
    scanf("%f",&ValorP);

    ValorT = PrestP*ValorP;
    Saldo = NumP*ValorP-ValorT;

    printf("O Valor Total ja pago �: %.2f\n",ValorT);
    printf("O Saldo devedor e de: %.2f\n",Saldo);

    system("pause");
}
