#include <stdio.h>
#include <stdlib.h>
/*
Apresentar o fatorial de um n�mero informado pelo usu�rio. Apresentar da seguinte forma (ex. Fatorial de 5):
5! => 5 * 4 * 3 * 2 * 1 = 120
*/
int main (void)
{
    int Num,Cont,Fat;

    printf("Informe um numero: ");
    scanf("%d",&Num);

    Fat=1;
    for(Cont=Num;Cont>=1;Cont--)
    {
        Fat=Fat*Cont;
        printf("%d x\t",Cont);
    }
    printf(" = %d\n",Fat);
    system("pause");
}

