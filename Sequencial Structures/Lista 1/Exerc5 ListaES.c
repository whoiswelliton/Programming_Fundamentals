#include <stdio.h>
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
    int Bruto;
    int Liquido;
    float Impostos;

    printf("Informe o valor do Salario Bruto: ");
    scanf("%f",&Bruto);
    printf("Informe o valor dos Salario Liquido: ");
    scanf("&2f",&Liquido);

    Impostos = Bruto - Liquido / 37;

    printf("O total de impostos �: %.2f",Impostos);

}




