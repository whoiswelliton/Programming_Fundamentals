#include <stdio.h>
#include <stdlib.h>
/*
Apresentar a tabuada de um n�mero informado pelo usu�rio.
*/
int main (void)
{
    int Num,Cont;

    printf("Informe um numero: ");
    scanf("%d",&Num);

    for (Cont=0;Cont<=10;Cont++)
    {
        printf("%d X %d = %d\n",Num,Cont,Cont*Num);
    }

    system("pause");
}
