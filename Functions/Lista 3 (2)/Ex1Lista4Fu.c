#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma fun��o que recebe 3 valores reais a, b e c (par�metros de entrada) e devolve um valor
que representa o tipo de equa��o. Como existem v�rios casos particulares, o valor devolvido pela
fun��o fornece a informa��o sobre isso. Assim os valores poss�veis s�o:
retorna 1 quando h� duas ra�zes diferentes;
retorna 0 quando h� duas ra�zes iguais;
retorna -1 quando n�o h� ra�zes reais;
retorna -2 quando a = 0 e b != 0, � equa��o do primeiro grau;
retorna -3 quando a = 0 e b = 0, ou seja n�o � equa��o;
	Tratar o retorna na fun��o chamadora que � a que recebe esse retorno, informando o tipo de
	equa��o.
*/
int main (void)
{
    int a,b,c,res;
    char Continuar,Opcao;
    do
    {
        system("cls");
        printf("\n___________________________________[BASKARA]___________________________________\n");
        printf("Informe o valor de a: ");
        scanf("%d",&a);
        printf("Informe o valor de b: ");
        scanf("%d",&b);
        printf("Informe o valor de c: ");
        scanf("%d",&c);
        printf("_________________________________________________________________________________\n");
        system("cls");


        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
