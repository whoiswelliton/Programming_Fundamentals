#include <stdio.h>
#include <stdlib.h>

/*
Ler dez n�meros inteiros e positivos. Validar as entradas para que os n�meros atendam a essa condi��o.
Fazer a m�dia dos pares desse intervalo. Verificar para que no c�lculo da m�dia n�o seja realizada divis�o
por zero.

*/
int main (void)
{
    int Num,Qtd=0,Soma=0,Cont;
    float Media;
    char Continuar;

    do
    {
        system("cls");
        printf("\n_____________________________________________________________________________\n");

        for(Cont=0;Cont<3;Cont++)
        {
            do
            {
                printf("Informe um numero: ");
                scanf("%d",&Num);
                if(Num % 2 == 0)
                {
                    Soma = Soma + Num;
                    Qtd++;
                }
            }while(Qtd < 0);
        }
        if(Qtd > 0)
        {
            Media = (float)Soma/Qtd;
            printf("\nMedia: %.2f\n",Media);
        }



        printf("\n_____________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
