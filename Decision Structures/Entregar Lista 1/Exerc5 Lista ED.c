#include <stdio.h>
#include <stdlib.h>
/*Elaborar um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
infantil A = 5 a 7 anos
infantil B = 8 a 10 anos
juvenil A = 11 a 13 anos
juvenil B = 14 a 17 anos
s�nior = maiores de 17 anos
n�o categorizado como atleta = menor de 5 anos, mas se o valor informado � negativo informar o
usu�rio que o valor � inv�lido para o escopo da solu��o.
Sugest�o: utilizar estruturas ifs encadeadas, por qu�?
*/
int main (void)
{
    int Idade;

    printf("Informe a Idade: ");
    scanf("%d",&Idade);

    if (Idade <= 0)
    {
        printf("Idade Invalida\n");
    }
    else if (Idade < 5)
    {
        printf("N�o Categorizado\n");
    }
    else if (Idade >= 5 && Idade <= 7)
    {
        printf("Categoria Infantil A\n");
    }
    else if (Idade >= 8 && Idade <= 10)
    {
        printf("Categoria Infantil B\n");
    }
    else if (Idade >= 11 && Idade <= 13)
    {
        printf("Categoria Juvenil A\n");
    }
    else if (Idade >=  14 && Idade <= 17)
    {
        printf("Categoria Juvenil B\n");
    }
    else //(Idade > 17);
    {
        printf("Categoria Senior\n");
    }

    system("pause");
}
