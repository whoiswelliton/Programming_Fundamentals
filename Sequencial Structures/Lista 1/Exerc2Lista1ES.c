#include <stdio.h>
/*Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada pelo atraso da presta��o. Calcule o valor a ser pago por meio da f�rmula: Atraso = Presta��o + (Presta��o * Taxa /100).
     Entrada
         Presta��o
         Taxa
     Processamento
         Atraso = Presta��o + (Presta��o * Taxa /100)
*/

int main(void)
{
   //declarar vari�veis
   float Prestacao;
   float Taxa;
   float Atraso;

   //entrada
   printf("Informe o valor da presta��o: ");
   scanf("%f",&Prestacao);
   printf("Informe o valor da taxa; (ex.: 10%%)");
   scanf("%f",&Taxa);

   //processamento
   Atraso = Prestacao + (Prestacao * Taxa/ 100);

   //sa�da
   printf("Presta��o com acr�cimo R$ %.2f",Atraso);
}
