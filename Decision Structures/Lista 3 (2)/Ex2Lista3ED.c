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

    int Codigo;
    char Continuar;
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("\nInforme o codigo do produto: ");
        scanf("%d",&Codigo);

        system("cls");

        if(Codigo == 1)
        {
            printf("\nAlimento Nao-Perecevil");
        }
        else if(Codigo >= 2 && Codigo <= 4)
        {
            printf("\nAlimento Perecivel");
        }
        else if(Codigo >= 5 && Codigo <= 6)
        {
            printf("\nVestuario");
        }
        else if(Codigo == 7)
        {
            printf("\nHigiene Pessoal");
        }
        else if(Codigo >= 8 && Codigo <= 15)
        {
            printf("\nLmipeza e Utensilios Domesticos");
        }
        else
        {
            printf("\nCodigo Invalido!");
        }

        printf("\n_______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
