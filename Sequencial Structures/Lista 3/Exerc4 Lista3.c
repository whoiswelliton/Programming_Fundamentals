#include <stdio.h>
#include <stdlib.h>
/*
Fazer um programa que leia um n�mero de at� tr�s d�gitos, calcule e imprima a soma dos seus d�gitos.
 Exemplo: 123 = 1 + 2 + 3 = 6.
*/
int main (void)
{
    long int Num;
    int U,D,C;
    int Soma;

    printf("Informe um n�meor com at� tr�s digitos: ");
    scanf("%li",&Num);

    C = Num/100;
    D = Num%100/10;
    U = Num%10;
    Soma = C+D+U;

    printf("A Soma dos d�gitos %d + %d + %d = %d\n",C,D,U,Soma);

    system("pause");
}
