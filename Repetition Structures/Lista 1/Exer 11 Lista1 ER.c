#include <stdio.h>
#include <stdlib.h>
/*
Escrever um programa que leia v�rios n�meros inteiros. O valor informado 0 indica o final da leitura.
No final imprimir a m�dia dos n�meros m�ltiplos de 3 informados. O valor que indica o final da leitura
 n�o deve ser considerado. Validar para que n�o seja realizada uma divis�o por zero.
*/
int main (void)
{
    int Num;
    int Soma=0;
    int Qtde=0;
    float Media;


    do
    {
        printf("Informe um numero: ");
        scanf("%d",&Num);
        if(Num !=0 && Num % 3 ==0)
        {
            Soma = Soma + Num;
            Qtde++;
        }

    }
    while(Num != 0);

    if (Qtde != 0)
    {
        Media = (float)Soma /Qtde;
        printf("A Media e : %.2f\n",Media);
    }



    system("pause");
}
