#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"

/*
Fazer uma fun��o para calcular o fatorial de um n�mero. A fun��o ser� implementada em um arquivo de cabe�alho.
a) Usar essa fun��o para mostrar o fatorial dos n�meros entre 1 e 8.
b) Usar essa fun��o para mostrar o fatorial de um valor informado pelo usu�rio. Continuar a leitura enquanto forem informados valores
positivos.
*/
int main (void)
{
    char Continuar,Opcao;
    int Num;
    int Resul;

    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("1 - Fatorial de um numero infomado.\n");
        printf("2 - Fatorial entre 1 e 8\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c",&Opcao);

        switch(Opcao)
        {
            case '1' :
            {
                do
                {
                    printf("Informe um Numero: ");
                    scanf("%d",&Num);
                    if(Num < 0 || Num > 15)
                    {
                        printf("Informe um Numero valido.");
                    }

                }while(Num < 0 || Num > 15);

                Resul = Fatorial(Num);

                printf("Fatorial de %d %c : %d",Num,130,Resul);
                break;
            }

            case '2':
            {
                for(Num=1;Num<=8;Num++)
                {
                    Resul = Fatorial(Num);
                    printf("%d! = %d\n",Num,Resul);
                }
                break;

            }
            default :
            {
                printf("\nNumero Ivalido!");
                break;
            }

        }
        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
