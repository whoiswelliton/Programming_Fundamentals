#include <stdio.h>
/*
) Ler um n�mero e apresentar o seu m�dulo (n�mero sem sinal), isto �, se o n�mero � negativo apresent�-lo como positivo.
*/

int main (void)

{
    int Num1;
    printf("Informe o numero desejado: ");
    scanf("%d",&Num1);

    if (Num1 < 0)
    {
    Num1 = Num1 * -1;
    }
    printf("%d em m�dulo: ",Num1);

}

