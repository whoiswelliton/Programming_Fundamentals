#include <stdio.h>
#include <stdlib.h>
#include "Pause.h"

/* Um professor atribui pesos de 1 a 4 para as notas de quatro avalia��es. A m�dia � calculada por meio da m�dia ponderada (N1*1 + N2*2 + N3*3 + N4*4) dividida por
e N1 � a nota da primeira avalia��o, N2 da segunda, N3 da terceira e N4 da quarta. Fa�a um algoritmo que calcule a m�dia ponderada. A m�dia ser� um valor float e
 as notas valores inteiros.
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
    int Nota1,Nota2,Nota3,Nota4;
    float Media;
    char Continuar;

    do
    {
        system("cls");

        printf("________________________________________________________________________________\n");
        printf("Informe a primeira nota: ");
        scanf("%d",&Nota1);
        printf("________________________________________________________________________________\n");
        printf("Informe a segunda nota: ");
        scanf("%d",&Nota2);
        printf("________________________________________________________________________________\n");
        printf("Informe a terceira nota: ");
        scanf("%d",&Nota3);
        printf("________________________________________________________________________________\n");
        printf("Informe a Quarta nota: ");
        scanf("%d",&Nota4);
        printf("________________________________________________________________________________\n");

        Media = (Nota1 + Nota2 + Nota3 + Nota4)/10;

        system("cls");

        printf("A Media final das 4 Notas %c: %.2f",130,Media);

        printf("\n\nPara executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);
    }while(Continuar == 'S' || Continuar == 's');
    Pause();

}
