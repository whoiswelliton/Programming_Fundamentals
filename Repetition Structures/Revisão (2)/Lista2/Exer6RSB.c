#include <stdio.h>
#include <stdlib.h>
/*
N�mero perfeito � aquele cuja soma de seus divisores, exceto ele pr�prio,
� igual ao n�mero. Por exemplo: 6 � perfeito porque 1 + 2 + 3 = 6.
Desenvolva um programa que leia um n�mero e verifique se o mesmo � perfeito.
 Prosseguir a leitura enquanto informado um valor maior que zero.
*/
int main (void)
{
    int Num,Cont,Qdiv,Divi;

    printf("Informe um numero: ");
    scanf("%d",&Num);


    for(Cont=1;Cont<=Num;Cont++)//percorrer o intervalo de 1 at� o num
    {
        Qdiv=0;
        for(Divi=2;Divi<=Cont;Divi++)//acumular os divisores
        {
            if(Cont % Divi == 0)
            {
                Qdiv=Qdiv + Divi;
            }
        }
        if(Qdiv == Cont)//verificar se a soma dos ivisores � igual ao numero testado
        {
            printf("%d \t",Cont);
        }
    }


    system("pause");
}

