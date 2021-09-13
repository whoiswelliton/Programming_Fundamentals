#include <stdio.h>
#include <stdlib.h>

/*
Ler tr�s valores que representam os comprimentos dos lados de um tri�ngulo e determinar se esses valores
podem formar um tri�ngulo. Para formar um tri�ngulo � necess�rio que a soma de dois lados quaisquer
seja maior (ou igual no caso de tri�ngulo com �rea zero) ao valor do outro lado.
*/
int main (void)
{
    float Num1,Num2,Num3,TR1,TR2,TR3;
    char Continuar;

    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe o primeiro comprimento do triangulo: ");
        scanf("%f",&Num1);
        printf("\n________________________________________________________________________________\n");
        printf("Informe o segundo comprimento do triangulo: ");
        scanf("%f",&Num2);
        printf("\n________________________________________________________________________________\n");
        printf("Informe o terceiro comprimento do triangulo: ");
        scanf("%f",&Num3);

        TR1 = Num1 + Num2;
        TR2 = Num1 + Num3;
        TR3 = Num2 + Num3;

        if(TR1 >= Num3 || TR2 >= Num2 || TR3 >= Num1)
        {
            printf("Medidas Aceitas,O Triangulo sera formado Corretamente!");
        }
        else
        {
            printf("Medidas Incorretas, O Triangulo nao sera formado!");
        }

        printf("\n________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
