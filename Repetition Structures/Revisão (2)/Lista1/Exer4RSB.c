#include <stdio.h>
#include <stdlib.h>
/*
Utilizando uma estrutura de repeti��o, apresentar todos os valores num�ricos inteiros pares situados na
faixa de 1000 a 1500.
*/
int main (void)
{
    int Cont,Pares;

    for(Cont=1000;Cont<=1500;Cont++)
    {
        if(Cont % 2 == 0)
        {
            printf("� %d �\t",Cont);
        }
    }
    system("pause");
}
