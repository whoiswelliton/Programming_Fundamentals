#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Ler um n�mero inteiro e imprimir o seu sucessor, sem alterar o conte�do da vari�vel, e antecessor,
 alterando o conte�do da vari�vel.
*/

int main (void)
{

    int Num;

    printf("Informe um n�mero: ");
    scanf("%d",&Num);

    printf("%d ==> %d\n",Num, Num+1);

    printf("%d ==>",Num);
    Num= Num - 1;
    printf("%d\n",Num);


    system("pause");
}
