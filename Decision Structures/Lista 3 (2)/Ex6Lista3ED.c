#include <stdio.h>
#include <stdlib.h>


/*
Ler um n�mero inteiro verificar se o mesmo possui at� 4 d�gitos
	a) Se sim, separar os d�gitos desse n�mero e mostr�-los em linhas distintas com a indica��o do d�gito.
Por exemplo:
Lido o n�mero: 1234
Mostrar:
1� - 1
2� - 2
3� - 3
4� - 4
*/
int main (void)
{
    float Num1,M,C,D,U;
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe um numero de ate quatro digitos: ");
        scanf("%f",&Num1);

        M = (int)Num1/1000;
        C = (int)Num1%1000 / 100;
        D = (int)Num1%1000%100 / 10;
        U = (int)Num1%10;

        printf("\nNumero lido: %.0f",Num1);
        printf("\n1%c: %.0f",248,M);
        printf("\n2%c: %.0f",248,C);
        printf("\n3%c: %.0f",248,D);
        printf("\n4%c: %.0f",248,U);

        printf("\n_______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
