#include <stdio.h> //cont�m printf() e scanf()
/* Escreva um algoritmo que leia o comprimento, a largura
 e a altura de uma caixa retangular e calcule o seu volume,
 cuja f�rmula �: Volume = Comprimento * Largura * Altura.
   Entrada:
       Altura
       Comprimento
       Largura
    Processamento:
       Volume = Comprimento * Largura * Altura
    Sa�da
       Volume
*/

int main (void)
{
    //declarar vari�veis
    float Largura;
    float Altura;
    float Comprimento;
    float Volume;

    //entrada
    printf("Informe o valor da largura: ");
    scanf("%f",&Largura);
    printf("Informe o valor da altura: ");
    scanf("%f",&Altura);
    printf("Informe o valor do comprimento: ");
    scanf("%f",&Comprimento);

    //processamento
    Volume = Largura * Comprimento * Altura;

    //sa�da
    printf("Volunme: %f",Volume);
}
