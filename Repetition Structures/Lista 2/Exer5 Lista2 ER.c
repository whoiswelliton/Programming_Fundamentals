#include <stdio.h>
#include <stdlib.h>
/*
Apresentar os n�meros divis�veis por 4 ou m�ltiplos de 10 entre 500 e 0 e a m�dia desses m�ltiplos.
*/
int main (void)
{
    int Div,Cont,Soma=0,Qtde=0;
    float Media;

    for(Cont=500;Cont>=0;Cont--)
    {
        if ((Cont % 4 ==0)||(Cont % 10 == 0))
        {
            printf("%d\t",Cont);
            Soma += Cont;
            Qtde++;
        }
    }
    Media = (float)Soma/Qtde;
    printf("A Media e: %f\n",Media);

    system("pause");
}
