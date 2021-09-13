#include <stdio.h>
#include <stdlib.h>

/*
 Faca uma fun��o que recebe por par�metro um m�s e um ano (num�ricos) e retornar se a data � v�lida.
 Para verificar se o ano � bissexto utilizar outra fun��o.
Utilizando essas fun��es:
a) Verificar se um determinado ano � bissexto.
b) Verificar se uma data (m�s e ano) � v�lida.
*/
int main (void)
{
    int Ano,Ano,Mes;
    char Continuar,Opcao;
    do
    {
        system("cls");

        printf("\n_______________________________________________________________________________\n");
        printf(" 1 - Verificar se um determinado ano � bissexto.\n");
        printf(" 2 - Verificar se uma data (m�s e ano) � v�lida.\n");
        printf(" 3 - Sair\n");
        printf("\n_______________________________________________________________________________\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c",&Opcao);
        switch(Opcao)
        {
            case '1':
            {
                printf("Infome um ano: ");
                scanf("%d",&Ano);

                if((Ano % 4 == 0 && Ano % 100 != 0) || (Ano % 400 == 0))
                {
                    printf("O Ano %d e bissexto.",Ano);
                }
                else
                {
                    printf("O Ano %d nao e bissexto.",Ano);
                }

                break;
            }
            case '2':
            {
                break;
            }
            case '3':
            {
                exit(0);
            }
            default:
            {
                printf("Opcao Invalida!\n");
            }

        }
        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
