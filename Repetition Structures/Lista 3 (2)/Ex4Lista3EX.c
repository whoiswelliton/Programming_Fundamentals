#include <stdio.h>
#include <stdlib.h>

/*
Ler um n�mero inteiro e determinar se o mesmo � primo. Um n�mero � primo quando � divis�vel de maneira exata
somente por 1 e por ele mesmo.
*/
int main (void)
{
    int Num,Cont=0,Qtd=0;
    char Continuar;
    do
    {
        system("cls");
        printf("\n_____________________________________________________________________________\n");
        printf("Informe um Numero: ");
        scanf("%d",&Num);

        system("cls");

        for(Cont=2;Cont<=Num/2;Cont++)
        {
            if(Num % Cont == 0)
            {
                Qtd++;
                break;
            }
        }

        if(Qtd > 0)
        {
            printf("O numero e Primo!");
        }
        else
        {
            printf("O numero nao e Primo!");
        }


        printf("\n____________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
