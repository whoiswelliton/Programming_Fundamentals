#include <stdio.h>
#include <stdlib.h>

/*
Ler um n�mero e utilizando uma estrutura if else if  else if... (obrigatoriamente encadeada)
informar se ele �:
a) divis�vel somente por 5, por 3 ou por 2;
Exemplo: 25 divis�vel somente por 5
b) n�o � divis�vel por nenhum destes;
Exemplo: 7 n�o � divis�vel por 5, 3 ou 2;
c) se � divis�vel por todos eles;
Exemplo: 30 � divis�vel por 2, 3 e 5.
d) se ele � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 � divis�vel somente por 3 e por 5.
Exemplo: 10 � divis�vel somente por 5 e por 2.
Exemplo: 6 � divis�vel somente por 3 e por 2.
Nesse exerc�cio faz diferen�a a ordem em que as compara��es s�o realizadas? Por qu�?
*/
int main (void)
{
    int Num;
    char Continuar;
    do
    {
        system("cls");
        printf("\n______________________________________________________________________________\n");
        printf("Informe um Numero: ");
        scanf("%d",&Num);

        system("cls");

        if(Num % 5 == 0 && Num % 3 == 0 && Num % 2 == 0)
        {
            printf("E Divisivel por 5, 3 e 2.");
        }

        else if(Num % 5 == 0 && Num % 3 != 0 && Num % 2 != 0)
        {
            printf("E Divisivel somente por 5.");
        }

        else if(Num % 5 != 0 && Num % 3 == 0 && Num % 2 != 0)
        {
            printf("E Divisivel somente por 3.");
        }

        else if(Num % 5 != 0 && Num % 3 != 0 && Num % 2 == 0)
        {
            printf("E Divisivel somente por 2.");
        }

        else if(Num % 5 == 0 && Num % 3 == 0 && Num % 2 != 0)
        {
            printf("E Divisivel por 5 e 3.");
        }

        else if(Num % 5 == 0 && Num % 3 != 0 && Num % 2 == 0)
        {
            printf("E Divisivel por 5 e 2.");
        }

        else if(Num % 5 != 0 && Num % 3 == 0 && Num % 2 == 0)
        {
            printf("E Divisivel por 2 e 3.");
        }

        else
        {
            printf("Nenhum e Divisivel");
        }






        printf("\n\n________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
