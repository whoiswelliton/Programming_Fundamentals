#include <stdio.h>
#include <stdlib.h>
/*
Fa�a um programa que imprima os 'n' (indicado pelo usu�rio) primeiros n�meros pares.
Mostrar cinco n�meros por linha.
Por exemplo, se o usu�rio informar 10, mostrar:
0    2    4    6     8 //primeira linha com cinco n�meros
10 12  14  16  18 // segunda linha com cinco n�meros.
*/
int main (void)
{
    //repetir o processamento enquanto a quantidade de numeros pares mostrados � menor que aqunatidade informada pelo usuario.
    int Qtparesm=0;
    int Pares,Cont=0;

    printf("Informe a quantidade de pares: ");
    scanf("%d",&Pares);

    do
    {
        if (Cont % 2 == 0)
        {
            printf("%d\t",Cont);
            Qtparesm++;
            if(Qtparesm % 5 ==0)
            {
                printf("\n");
            }
        }
        Cont++;
    }
    while(Qtparesm < Pares);
    printf("\n");
    system("pause");
}
