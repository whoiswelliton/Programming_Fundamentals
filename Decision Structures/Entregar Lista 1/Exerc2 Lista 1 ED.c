#include <stdio.h>
#include <stdlib.h>
/*Ler dois valores num�ricos e apresentar a diferen�a entre eles. A diferen�a sempre � positiva,
portanto, o menor � subtra�do do maior n�o importando a ordem em que os n�meros s�o informados.
*/

int main (void)

{
    int Num1,Num2;

    printf("Informe o primeiro numero: ");
    scanf("%d",&Num1);
    printf("Informe o segundo numero: ");
    scanf("%d",&Num2);

    if (Num1 >= Num2)
    {
        Num1 = Num1-Num2;
    }
    else
    {
        Num1 = Num2-Num1;
    }

    printf(" A diferen�a e de: %d\n",Num1);

    system("pause");
}
