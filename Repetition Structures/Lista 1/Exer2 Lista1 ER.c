#include <stdio.h>
#include <stdlib.h>
/*
Apresentar os m�ltiplos de 5, entre 5 e 50.
*/
int main (void)
{

    int Cont;//Contar� as intera�oes do for

    for(Cont=5;Cont<=50;Cont=Cont+5)
    {
        printf("%d\t",Cont);
    }
    printf("\n");

    system("pause");
}
