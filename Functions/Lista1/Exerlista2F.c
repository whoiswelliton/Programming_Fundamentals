#include <stdio.h>
#include <stdlib.h>
#include "FuncoesUteis.h"//incluir o arquivo
/*
2) Fazer uma fun��o para verificar se um n�mero � primo. A fun��o ser� implementada
em um arquivo de cabe�alho. Tamb�m criar uma fun��o para realizar a funcionalidade
de system(�pause�);
a) Usar essa fun��o para verificar se um n�mero informado pelo usu�rio � primo.
Validar a entrada para que o usu�rio informe um n�mero positivo e maior que zero.
b) Usar essa fun��o para mostrar os primos no intervalo entre 1 e 100.
c) Usar essa fun��o para fazer a m�dia dos primos entre 200 e 100.
*/

int main (void)
{
    char Continuar;
    char Opcao;
    int Num,Retorno,Cont,Qtdivisores,Soma;
    float Media;

    do
    {
        system("cls");
        Qtdivisores=0;
        printf("A - Verificar se um numero e primo \n");
        printf("B - Primos entre 1 e 100\n");
        printf("C - soma dos primos entre 200 e 100\n");
        printf("S - Sair\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c",&Opcao);

        switch(Opcao)
        {
            case 'A':
            case 'a':
            {
                do
                {
                printf("Informe um numero: ");
                scanf("%d",&Num);
                }while(Num < 0);
                Retorno = Primo(Num);
                if(Retorno == 0)
                {
                    printf("%d e primo\n",Num);
                }
                else
                {
                    printf("%d nao e primo\n",Retorno);
                }
                break;
            }
            case 'B':
            case 'b':
            {
                for(Cont=1;Cont<=100;Cont++)
                {
                    Retorno = Primo(Cont);
                    if(Retorno == 0)
                    {
                        printf("%d\t",Cont);
                        Qtdivisores++;
                        if(Qtdivisores % 5 == 0)
                        {
                            printf("\n");
                        }
                    }
                }
                break;
            }
            case 'C':
            case 'c':
            {
                Soma =0;
                Qtdivisores=0;
                for(Cont=200;Cont>=100;Cont--)
                {
                    Retorno == Primo(Cont);
                    Soma = Soma + Cont;
                    Qtdivisores++;
                }
                if (Qtdivisores > 0)
                {
                    Media = (float)Soma/Qtdivisores;
                    printf("\nA Media dos primos: %.2f\n",Media);
                }
                break;
            }
            case 'S':
            case 's':
            {
                exit(0);
            }
            default:
            {
                printf("Opcao invalida");
            }
        }


        printf("\nExecutar novamente (S/s para sim); ");
        fflush(stdin);
        scanf("%c",&Continuar);
    }while(Continuar == 's' || Continuar == 'S');
}
