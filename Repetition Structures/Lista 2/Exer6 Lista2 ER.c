#include <stdio.h>
#include <stdlib.h>
/*
Ler n�meros inteiros informados pelo usu�rio at� ser informado o valor -999.
Dentre os n�meros informados, exceto o -999 que � a condi��o de sa�da:
a) contar a quantidade de n�meros menores que 10 e os maiores que 100;
b) contar a quantidade de n�meros �mpares;
c) contar a quantidade de n�meros divis�veis por 10;
d) contar a quantidade de n�meros entre 10 e 100;
e) contar quantas vezes � informado o n�mero 30;
f) contar quantas vezes � informado um n�mero diferente de 10, de 20 e de 30.
*/
int main (void)
{
    int Num;
    int Qtdemenor;
    int Qtdeimpar;
    int Num30;
    int Numdif;
    int Qtdemenor;

    do
    {
        printf("Informe um numero: ");
        scanf("%d",&Num);
        if (Num != -999)
        {
            Soma = Soma + Num;
            Qtde++;
        }
    }while (Num != -999);


    system("pause");
}
