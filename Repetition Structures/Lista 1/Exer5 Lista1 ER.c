#include <stdio.h>
#include <stdlib.h>
/*
Ler um n�mero e imprimir todos os n�meros pares entre 1 e o n�mero lido. Imprimir a soma dos pares,
o produto dos �mpares e divis�veis por 9 e a m�dia de todos os n�meros do intervalo. Validar para
que n�o seja realizada uma divis�o por zero.
*/
int main (void)
{
    int Num,Cont;
    int SomaPares=0;
    int ProdutoImpares9=1;//acumulara a multiplic�o
    int SomaTodos=0;
    int Qdetodos=0;//contara quantos
    float Media;



    printf("Informe o limite superior do intervalo: \n");
    scanf("%d",&Num);

    for(Cont=1;Cont<=Num;Cont++)
    {
        if(Cont % 2 == 0)// se o resto da divis�o � zero
        {
            printf("%d\t",Cont);
            SomaPares = SomaPares + Cont;

        }
        else if(Cont%2 != 0 && Cont %9 ==0)
        {
            ProdutoImpares9 = ProdutoImpares9 * Cont;
        }
        SomaTodos = SomaTodos + Cont;
        Qdetodos++;
    }
    printf("\nSoma dos pares:%d\n",SomaPares);
    printf("Produto dos impares e divisiveis por 9:%d\n",ProdutoImpares9);

    if(Qdetodos !=0)
    {
        Media = (float)SomaTodos / Qdetodos;
        printf("A media dos valores do intervalo: %.2f\n",Media);
    }


    system("pause");
}
