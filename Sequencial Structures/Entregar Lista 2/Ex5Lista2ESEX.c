#include <stdio.h>
#include <stdlib.h>

/*
Ler um n�mero com at� 4 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Por exemplo:
Lido o n�mero: 1234
Mostrar da seguinte forma:
1 � o primeiro d�gito.
2 � o segundo d�gito.
3 � o terceiro d�gito.
4 � o quarto d�gito.

*/
int main (void)
{

    float Num,M,C,D,U;
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe um umero de 4 Digitos: ");
        scanf("%f",&Num);
        printf("__________________________________________________________________________________\n");

        system("cls");

        M = (int) Num/1000;
        C = (int) Num%1000 / 100;
        D = (int) Num%100 /10;
        U = (int) Num%10;

        printf("Numero Lido: %.0f ",Num);
        printf("\n %.0f e o primeiro digito.",M);
        printf("\n %.0f e o segundo digito.",C);
        printf("\n %.0f e o terceiro digito.",D);
        printf("\n %.0f e o quarto digito.",U);

        printf("\n\n_________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
