#include <stdio.h>
#include <stdlib.h>
#include "Funcao1.h"

/*
Fazer uma fun��o para verificar se um n�mero � quadrado perfeito. Um n�mero � quadrado perfeito se pode ser obtido com
a soma dos n primeiros n�meros
�mpares iniciando em 1. Por exemplo, 9, � quadrado perfeito porque a raiz quadrada � 3 ou porque 1 + 3 + 5 = 9 (soma
 dos n primeiros n�meros �mpares inciando em 1). Essa fun��o recebe como par�metro um valor inteiro e retorna 's' se
  o n�nero � um quadrado perfeito e 'n' caso n�o.
Usar essa fun��o para (usar obrigatoriamente a mesma fun��o):
a) Ler um n�mero interiro informado pelo usu�rio � verificar se o mesmo � um quadrado perfeito.
b) Ler um n�mero float informado pelo usu�rio e verificar se a parte inteira desse n�mero � um quadrado perfeito.
c) Mostrar os n�meros que s�o quadrados perfeitos de um intervalo, com os valores (limite superior e inferior)
 informados pelo usu�rio.
*/
int main (void)
{
    char Continuar,Opcao;
    int Valor1,Valor2,Cont;
    float ValorF;
    do
    {
        system("cls");
        printf("\n_______________________________________________________________________________\n");
        printf("a)Ler um n�mero interiro informado pelo usu�rio � verificar se o mesmo � um quadrado perfeito\n");
        printf("b)Ler um n�mero float informado pelo usu�rio e verificar se a parte inteira desse n�mero � um quadrado perfeito.\n");
        printf("c)Mostrar os n�meros que s�o quadrados perfeitos de um intervalo, com os valores (limite superior e inferior) informados pelo usu�rio.\n");
        printf("_________________________________________________________________________________\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c",&Opcao);
        switch(Opcao)
        {
            case 'a':
            {
                printf("Informe um valor inteiro: ");
                scanf("%d",&Valor1);
                Opcao = Quadradoperfeito(Valor1);
                if(Opcao == 's')
                {
                    printf("%d e quadrado perfeito",Valor1);
                }
                else
                {
                    printf("%d nao e quadrado perfeito",Valor1);
                }
                break;
            }
            case 'b':
            {
                printf("Informe um valor float: ");
                scanf("%f",&ValorF);
                Valor1 = (int)ValorF;

                Opcao = Quadradoperfeito(Valor1);
                if(Opcao == 's')
                {
                    printf("%d e quadrado perfeito",Valor1);
                }
                else
                {
                    printf("%d nao e quadrado perfeito",Valor1);
                }

                break;
            }
            case 'c':
            {
                printf("Informe o limite inferior do intervalo: ");
                scanf("%d",&Valor1);
                printf("Informe o limite superior do intervalo: ");
                scanf("%d",&Valor2);
                for(Cont+Valor1;Cont<=Valor2;Cont++)
                {
                    if(Quadradoperfeito(Cont) == 's')
                    {
                        printf("%d\t",Cont);
                    }
                }

            }
        }
        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
