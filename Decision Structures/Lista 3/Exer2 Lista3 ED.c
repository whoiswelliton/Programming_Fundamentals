#include <stdio.h>
#include <stdlib.h>
/*
Elaborar um programa para ler o c�digo de um produto e o classific�-lo de acordo com a tabela a seguir:
c�digo
classifica��o
1
Alimento n�o-perec�vel
2 a 4
Alimento perec�vel
5 e 6
Vestu�rio
7
Higiene pessoal
8 a 15
Limpeza e utens�lios dom�sticos
Qualquer outro c�digo (negativo ou positivo)
Inv�lido
*/
int main (void)
{
    int codigo;

    printf("Informe o codigo do produto: ");
    scanf("%d",&codigo);


    if (codigo == 1)
    {
        printf ("Alimento nao-perecivel\n");
    }
    else if ((codigo >= 2) && (codigo <=4))
    {
        printf ("Alimento perecivel\n");
    }
    else if ((codigo >=5) && (codigo <=6))
    {
        printf("Vestuario\n");
    }
    else if (codigo == 7)
    {
        printf("Higiene pessoal\n");
    }
    else if ((codigo >=8) && (codigo <=15))
    {
        printf("Limpeza e utensilios domesticos\n");
    }
    else
    {
        printf("Codigo Invalido\n");
    }

    system("pause");
}
