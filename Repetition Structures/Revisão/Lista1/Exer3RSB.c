#include <stdio.h>
#include <stdlib.h>
/*
Utilizando uma estrutura de repeti��o, apresentar os quadrados dos n�meros inteiros de 15 a 35.
*/
int main (void)
{
    int Cont,Cont2;

    for(Cont=15;Cont<=35;Cont++)
    {
        Cont2=Cont*Cont;
        printf("�� %d\t",Cont2);
    }

    system("pause");
}

