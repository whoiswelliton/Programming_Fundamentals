#include <stdio.h>
#include <stdlib.h>
#include "Pause.h"

/* Calcular o sal�rio l�quido de uma pessoa. Sobre o sal�rio bruto incidem descontos de 27% de imposto de renda e 10% de INSS.
      Entrada:
         Bruto
         Impostos
      Processamento:
         L�quido = Bruto / Impostos
      Sa�da
         Impostos
*/

int main (void)
{
    int Bruto,liquido;
    float Imp;
    char Continuar;

    do
    {
        system("cls");

        printf("________________________________________________________________________________\n");
        printf("Informe o valor dos Salario Bruto: ");
        scanf("%f",&Bruto);
        printf("________________________________________________________________________________\n");

        system("cls");

        liquido = (float)Bruto - (Bruto * 37/100);

        printf("O salario liquido %c: %d",130,liquido);

        printf("\n\nPara Executar Novamente (S/s Para sim):");
        fflush(stdin);
        scanf("%c",&Continuar);
    }while(Continuar == 's' || Continuar == 'S');
    Pause();
}
