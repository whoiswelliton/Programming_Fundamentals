#include <stdio.h>
#include <stdlib.h>
/*
Ler um n�mero. Verificar se o n�mero informado possui a unidade ou a dezena igual a 5.
 Informar �o n�mero possui unidade e/ou dezena 5� ou �o n�mero n�o possui unidade e
 dezena 5�, conforme o caso. Continuar a leitura enquanto o usu�rio informar um valor
 diferente de zero. Zero que � a condi��o de sa�da n�o deve ser verificado.
*/
int main (void)
{
    int Num,U,D;

    do
    {
    printf("Informe um numero: ");
    scanf("%d",&Num);
    printf("\n");


    if(Num % 10 == 5)
    {
        printf("Numero possui unidade e/ou dezena 5\n\n");
    }
    else
    {
        printf("Numero nao possui unidade e dezena 5\n\n");
    }
    }while(Num != 0);

    system("pause");
}
