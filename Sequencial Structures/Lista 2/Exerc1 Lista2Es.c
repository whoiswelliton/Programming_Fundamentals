#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Cont�m fun�oes matematicas
/*
Ler dois n�meros reais (ponto flutuante) e apresentar:
	a) A subtra��o do primeiro n�mero pelo segundo com duas casas decimais, com arredondamento estat�stico.
	b) O primeiro n�mero com a parte decimal truncada, ou seja, s� mostrar a parte inteira.
	c) A soma dos dois n�meros com o resultado arredondado para o pr�ximo n�mero inteiro.
*/

int main (void)
{
    float Num1, Num2;
    float Subtracao;
    int Soma,Primeiro;

    printf("Informe o primeiro valor: ");
    scanf("%f",&Num1);
    printf("Informe o segundo valor: ");
    scanf("%f",&Num2);

    Subtracao = round((Num1 - Num2));
    Primeiro = trunc(Num1); // apanhar somente a parte inteira
    Soma = ceil(Num1 + Num2); //arredondar para o proximo inteiro

    printf("%f - %f ==> %f\n",Num1,Num2,Subtracao);
    printf("%f ==> %d\n",Num1,Primeiro);
    printf("%f + %f ==> %f\n",Num1,Num2,Soma);

    Primeiro = (int)Num1;
    Soma = (Num1 + Num2) + 0.999999;


    printf("\n\n%f - %f ==> %.2f\n",Num1,Num2,Subtracao);
    printf("%f ==> %d\n",Num1,Primeiro);
    printf("%f + %f ==> %d\n",Num1,Num2,Soma);

    system("pause");
}
