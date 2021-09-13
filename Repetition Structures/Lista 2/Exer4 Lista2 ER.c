#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Apresentar o quadrado dos n�meros divis�veis por 3 e a raiz quadrada dos n�meros positivos e
divis�veis por 5 ou por 7 entre 0 a 100. Apresentar em listagens separadas: uma para os quadrados
 e outra as ra�zes quadradas. Em cada listagem separar os n�meros por uma tabula��o. A raiz quadrada
 pode ser obtida pela fun��o sqrt () que est� na biblioteca <math.h>
*/
int main (void)
{
    int Cont,Quad;
    float Raiz;

    for(Cont=0;Cont<=100;Cont++)
    {
        if (Cont %3==0)
        {
        Quad=Cont*Cont;
        printf("%d\t",Quad);
        }
    }
    printf("\n\n\n");
    for(Cont=0;Cont<=100;Cont++)
    {
        if (Cont %5==0 || Cont %7==0)
        {
        Raiz= sqrt(Cont);
        printf("%.2f\t",Raiz);
        }
    }

    system("pause");
}
