#include <stdio.h>
#include <stdlib.h>
/*
Ler um n�mero ponto flutuante (float):
a) Se o n�mero lido � menor que 100, separar a parte inteira e a parte decimal e mostr�-las
separadamente.
b) Se o n�mero lido � maior ou igual a 100, obter o resto da divis�o desse n�mero por 3 e
mostrar esse resto.
*/

int main (void)
{
    float Num,Decimal;
    int Numi,Resto;

    printf("Informe um numero: ");
    scanf("%f",&Num);

    if (Num < 100)
    {
        Numi = (int)Num;
        Decimal = Num-Numi;
        printf("Inteiro: %d\n Decimal: %f\n",Numi,Decimal);
    }
    else
    {
        Resto= (int)Num % 3;
        printf("O Resto da divisao e: %d\n",Resto);
    }

    system("pause");
}
