#include <stdio.h>
#include <stdlib.h>
/*
Ler tr�s valores que representam os comprimentos dos lados de um tri�ngulo e determinar se esses
valores podem determinar um tri�ngulo. Para formar um tri�ngulo � necess�rio que a soma de dois
lados quaisquer seja maior (ou igual no caso de o tri�ngulo ter �rea zero) ao valor do outro lado.
*/
int main (void)
{
    int A,B,C;

    printf("Informe o valor do primeiro lado: ");
    scanf("%d",&A);
    printf("Informe o valor do segundo lado: ");
    scanf("%d",&B);
    printf("Informe o valor do terceiro lado: ");
    scanf("%d",&C);
    system("pause");

    if (A > B && A > C)
}
