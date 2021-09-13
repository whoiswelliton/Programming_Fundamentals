#include <stdio.h>
#include <stdlib.h>
#include "Fatorial.h"
#include "Pause.h"

/*
3) Fazer uma fun��o para calcular o fatorial de um n�mero. A fun��o ser� implementada
 em um arquivo de cabe�alho.
a) Usar essa fun��o para mostrar o fatorial dos n�meros entre 1 e 8.
b) Usar essa fun��o para mostrar o fatorial de um valor informado pelo usu�rio.
Continuar a leitura enquanto forem informados valores positivos.
*/
int main (void)
{
    char Continuar;
    char Opcao;
    int Cont,Retorno,Num;
    int Fatorial (int Num);

    do
    {   system("cls");

        printf("A - Fatorial entre 1 e 8\n");
        printf("B - Fatorial de um numero\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c",&Opcao);

        switch (Opcao)
        {
            case'A':
            case'a':
            {
                for(Cont=1;Cont<=8;Cont++)
                {
                    Retorno = Fatorial(Cont);
                    printf("%d ==> %d\n",Cont,Retorno);
                }
                break;
            }
            case'B':
            case'b':
            {
                do
                {
                    printf("Informe um numero para calcular o fatorial: ");
                    scanf("%d",&Num);
                    if(Cont <= 0)
                    {
                        printf("Valor deve ser maior que zero\n");
                    }
                }while(Cont <= 0);
                Retorno = Fatorial(Cont);
                printf("fatorial de %d e %d\n",Cont,Retorno);
                break;
            }
            case'S':
            case's':
            {
                exit(0);
            }
            default:
            printf("Opcao invalida");
        }


        printf("\nExecutar novamente (S/s para sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);
    }while(Continuar == 'S' || Continuar == 's');
    Pause();
}

