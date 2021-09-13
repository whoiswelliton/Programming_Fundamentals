#include <stdio.h>
#include <stdlib.h>
#include "Funcoes.h"
#include "Pause.h"

/*
Fazer uma fun��o para verificar se um n�mero � primo. A fun��o ser� implementada em um
arquivo de cabe�alho. Tamb�m criar uma fun��o para realizar a funcionalidade de
system(�pause�);
a) Usar essa fun��o para verificar se um n�mero informado pelo usu�rio � primo.
Validar a entrada para que o usu�rio informe um n�mero positivo e maior que zero.
b) Usar essa fun��o para mostrar os primos no intervalo entre 1 e 100.
c) Usar essa fun��o para fazer a m�dia dos primos entre 200 e 100.
*/


int main (void)
{
    char Continuar,Opcao;
    float Retorno,Media=0;
    int Num,Qtd=0,Cont,Soma;
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("Escolha um Opcao:\n");
        printf("\n 1 - Se o numero e Primo\n");
        printf("\n 2 - Primos no intervalo entre 1 e 100\n");
        printf("\n 3 - Media dos primos entre 200 e 100\n");
        printf("\n 4 - Sair\n");
        printf("\n_______________________________________________________________________________\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c",&Opcao);

        switch(Opcao)
        {
            case '1':
            {
                do
                {
                    printf("\nInforme um numero: ");
                    scanf("%d",&Num);

                    if(Num < 0)
                    {
                        printf("\nInforme numero positivo!");
                    }

                }while(Num < 0);

                Retorno = Primos(Num);

                if(Retorno == 0)
                {
                    printf("\nO Numero e Primo!");
                }
                else
                {
                    printf("\nO Numero nao e Primo!");
                }

                break;
            }
            case '2':
            {
                printf("Primos entre 1 e 100:\n");

                for(Cont=1;Cont<=100;Cont++)
                {
                    Retorno = Primos1a100(Cont);

                    if(Retorno == 0)
                    {
                        printf("%d\t",Cont);
                    }
                }

                break;
            }
            case '3':
            {
                printf("\nMedia dos Primos entre 100 e 200:\n");
                for(Cont=100;Cont<=200;Cont++)
                {
                    if(Primos(Cont)== 0)
                    {
                        Soma = Soma + Cont;
                        Qtd++;
                    }
                    Media = (float) Soma/Qtd;
                    printf("Media dos primos: %.2f\n",Media);
                }

                break;
            }
            case '4':
            {
                exit(0);
            }
            default:
            {
                printf("\nOpcao Invalida!");
            }
        }
        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
    Pause();
}
