#include <stdio.h>
#include <stdlib.h>
/*
) A convers�o de graus Fahrenheit para cent�grados � obtida pela f�rmula C=5/9(F-32).
Escreva um algoritmo que calcule e escreva uma tabela de graus cent�grados em fun��o de graus Fahrenheit
 que variem de 50 a 70 de 1 em 1.
*/
int main (void)
{
    int Cont,Far;
    int Colunas=0;

    for(Cont=50;Cont<=70;Cont++)
    {
        Colunas++;

        Far = (Cont*1.8) + 32;
        printf("%d� �\t",Far);

        if(Colunas % 5 ==0)
        {
            printf("\n");
        }
    }

    system("pause");
}
