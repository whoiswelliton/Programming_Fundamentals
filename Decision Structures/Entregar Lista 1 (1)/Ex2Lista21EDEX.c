
#include <stdio.h>
#include <stdlib.h>

/*
Ler dois valores num�ricos e apresentar a diferen�a entre eles. A diferen�a sempre � positiva, portanto,
 o menor � subtra�do do maior n�o importando a ordem em que os n�meros s�o informados.
*/
int main (void)
{
    float Num1,Num2,Num3,Num4;
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Inform o Primeiro Numero:");
        scanf("%f",&Num1);
        printf("Inform o Segundo Numero:");
        scanf("%f",&Num2);

        Num3=Num1-Num2;

        if(Num3 < 0)
        {
            Num4 =Num3*-1;
            printf("A diferen�a entre eles %c de: %.2f",130,Num4);
        }
        else
        {
            printf("\nA diferen�a entre eles %c de: %.2f",130,Num3);
        }

        printf("\n______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
