#include <stdio.h>
#include <stdlib.h>
/*
Utilizando uma estrutura de repeti��o, apresentar todos os n�meros da sequ�ncia a seguir:
5, 10, 15, 20, 25, .., 45, 50.
*/
int main (void)
{
    int Cont;

    for(Cont=0;Cont<=50;Cont+=5)
    {
        printf("%d\t",Cont);
    }
    system("pause");
}
