#include <stdio.h>
#include <stdlib.h>
#include <Pause.h>

/*
Ler a quantidade de kilowatts de energia el�trica consumidos por uma resid�ncia.
Calcular e mostrar o valor em reais de cada kilowatts, o valor total a ser pago e o novo valor a ser pago
 por essa resid�ncia quando h� desconto de 10%. Considere que 100 kilowatts custam 1/7 do sal�rio m�nimo.
  Ler o valor do sal�rio m�nimo.
*/
int main (void)
{
    char Continuar;
    float K,S,T;

    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe a quantidade de kilowatts consumidos no mes: ");
        scanf("%f",&K);
        printf("Informe o salaraio minimo da casa: ");
        scanf("%f",&S);
        printf("__________________________________________________________________________________\n");




        printf("_________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
    Pause();
}
