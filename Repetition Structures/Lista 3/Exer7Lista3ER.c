#include <stdio.h>
#include <stdlib.h>
/*
Apresentar todos os valores inteiros entre dois valores informados pelo usu�rio, a quantidade
existentes nesse intervalo, a soma dos �mpares e a m�dia de todos os valores. O usu�rio pode
informar os valores em ordem crescente ou decrescente. Encontrar o maior e o menor antes de
percorrer o intervalo. Validar para que n�o seja realizada uma divis�o por zero no c�lculo da
m�dia.
*/
int main (void)
{
    int Num1,Num2;
    int Cont;
    int SomaI=0,Media;
    int Qtdenum=0;

    printf("Informe o primeiro valor: ");
    scanf("%d",&Num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&Num2);

    if(Num1 > Num2)
    {
        Cont = Num1;
        Num1 = Num2;
        Num2 = Cont;
    }

    for(Cont=Num1;Cont<=Num2;Cont++)
    {
        printf("%d\t",Cont);
        if (Cont % 2 != 0)
        {
            SomaI = SomaI + Cont;
            Qtdenum++;
        }
    }

    if(Qtdenum != 0)
    {
        Media = (float) Cont/Qtdenum;
        printf("\n A Media total e : %f\n",Media);
    }

    printf("\n A Soma dos impares e : %d\n",SomaI);

    system("pause");
}
