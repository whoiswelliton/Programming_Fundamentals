#include <stdio.h>
/* Um professor atribui pesos de 1 a 4 para as notas de quatro avalia��es. A m�dia � calculada por meio da m�dia ponderada (N1*1 + N2*2 + N3*3 + N4*4) dividida por 10, onde N1 � a nota da primeira avalia��o, N2 da segunda, N3 da terceira e N4 da quarta. Fa�a um algoritmo que calcule a m�dia ponderada. A m�dia ser� um valor float e as notas valores inteiros.
     Entrada:
         Nota 1
         Nota 2
         Nota 3
         Nota 4
     Processamento
         M�dia = (Nota 1 + Nota 2 + Nota 3 + Nota 4) / 10
     Sa�da
         M�dia
*/

int main (void)
{
    printf("Calculo da Media Ponderada \n");


    int Nota1;
    int Nota2;
    int Nota3;
    int Nota4;
    float Media;

    printf("Informe o valor da Primeira Nota: ");
    scanf("%d",&Nota1);
    printf("Informe o valor da Segunda Nota: ");
    scanf("%d",&Nota2);
    printf("Informe o valor da Terceira Nota: ");
    scanf("%d",&Nota3);
    printf("Informe o valor da Quarta Nota: ");
    scanf("%d",&Nota4);

    Media = (Nota1 + Nota2 + Nota3 + Nota4) / 10;

    printf("A Media e: %f \n",Media);
}
