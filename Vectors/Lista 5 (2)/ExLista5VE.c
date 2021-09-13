#include <stdio.h>
#include <stdlib.h>
#include "Vetores.h"
#include "Funcoes.h"

/*
*/
int main (void)
{
    int i,j,qtd,qtd2,Vet[20],Vet2[20],N1,M;
    char Continuar,Opcao,String[50],String2[50];
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("\nA - Exercicio 1");
        printf("\nB - Exercicio 2");
        printf("\nC - Exercicio 3");
        printf("\nD - Exercicio 4");
        printf("\nE - Exercicio 5");
        printf("\n_________________________________________________________________________________\n");
        printf("Opcao: ");
        scanf("%c",&Opcao);
        switch(Opcao)
        {
            case 'A':
            {
                /*Ler uma string e copi�-la para outra string sem os poss�veis espa�os em branco no in�cio.
                 N�o esquecer de finalizar a string copiada.*/
                 i=0,qtd=0;
                 printf("\nInforme uma string: ");
                 fflush(stdin);
                 gets(String);

                 while(String[i] != ' ' && String[i] != '\0')
                 {
                     String2[i] = String[i];
                     i++;
                 }
                 String2[i] = '\0';
                 i=0;
                 while(String2[i] != '\0')
                 {
                     printf("%c",String2[i]);
                     i++;
                 }

                break;
            }
            case 'B':
            {
                /*Ler uma string e copiar para a mesma string deixando apenas um espa�o em branco entre cada
                palavra.*/
                 i=0,qtd=0;
                 printf("\nInforme uma string: ");
                 fflush(stdin);
                 gets(String);

                 while(String[i] != '\0')
                 {
                     if(String[i] == ' ')
                     {
                         i++;
                     }
                     else if(String[i] != ' ')
                     {
                         printf("%c",String[i]);
                     }
                     else if (String[i-1] == ' ');
                     {
                         printf("%c",String[i]);
                     }
                     i++;
                 }

                break;
            }
            case 'C':
            {
                /*Ler uma string e contar quantas palavras a mesma possui. Considerar o seguinte contexto:
                a) O usu�rio pode informar apenas uma palavra, com ou sem espa�os no in�cio ou final da mesma.
                b) O usu�rio pode informar mais de um espa�o entre palavras.
                c) O usu�rio pode n�o informar nenhuma palavra (simplesmente pressionar ENTER).*/
                i=0;
                qtd=0;

                printf("\nInforme uma string: ");
                fflush(stdin);
                gets(String);

                while(String[i] != '\0')
                {
                    while(String[i] == ' ' && String[i+1] != ' ')
                    {
                        qtd++;
                    }
                    i++;
                }
                if(String[0] != ' ')
                {
                    qtd++;
                }

                printf("\nA String tem %d palavras",qtd);

                break;
            }
            case 'D':
            {
                /* Fa�a uma fun��o que recebe por par�metro um vetor num�rico, verificar se os seus dados
                est�o ordenados de forma crescente, decrescente ou n�o ordenados.*/

                i=0;
                qtd=0,qtd2=0;


                printf("Informe 10 numeros: ");
                for(i=0;i<10;i++)
                {
                    printf(" ");
                    scanf("%d",&Vet[i]);
                }

                for(i=0;i<10;i++)
                {
                    if(Vet[i]+1 == Vet[i+1])
                    {
                        qtd++;
                    }

                }

                for(i=0;i<10;i++)
                {
                    if(Vet[i]-1 == Vet[i+1])
                    {
                        qtd2++;
                    }
                }

                if(qtd == 9)
                {
                    printf("\nA Ordem e Crescente!\n");
                }

                if(qtd2 == 9)
                {
                    printf("\nA Ordem e Decrescente!\n");
                }
                else if(qtd != 9 && qtd != 0 || qtd2 != 9 && qtd2 != 0)
                {
                    printf("\nA Ordem esta Desordenada!\n");
                }

            }
            case 'E':
            {
                /* Implemente uma fun��o que  recebe por par�metro um vetor num�rico e retorna o n�mero de
                maior ocorr�ncia no vetor. Podem ser utilizadas as fun��es gerar vetor para ger�-lo e para
                mostrar vetor para testar a fun��o.
                Por exemplo:
                Vetor: 2		3	5	3	5	5	1	5	7	9	2	2
                5 � o valor de maior ocorr�ncia.*/
                i=0,j=0,qtd=0,qtd2=0;

                GerarVetor(Vet,20,10);
                MostrarVetor(Vet,20);



            }
        }
        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
