#include <stdio.h>
#include <stdlib.h>

/*
Elaborar um algoritmo que leia uma letra. Se informado �F� ou �f� mostrar a mensagem �pessoa f�sica�, se informado �J� ou �j�
mostrar a mensagem �pessoa jur�dica� ou "tipo de pessoa inv�lido" para qualquer outro caractere.
char Pessoa; //declarar uma vari�vel do tipo char
scanf(�%c�,&Pessoa); //para ler um char
if (Pessoa == �f� || Pessoa == �F�) //para comparar se o conte�do armazenado na vari�vel � um determinado caractere.
*/
int main (void)
{

    char Pessoa;
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Iforme se pessoa fisica (F/f) ou juridica (J/j): ");
        scanf("%c",&Pessoa);

        system("cls");

        if(Pessoa == 'J' || Pessoa == 'j')
        {
            printf("\nPessoa Juridica!");
        }
        if(Pessoa == 'F' || Pessoa == 'f')
        {
            printf("\nPessoa F�sica!");
        }
        else
        {
            printf("Caracter invalido!");
        }

        printf("_________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
