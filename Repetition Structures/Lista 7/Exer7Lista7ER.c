#include <stdio.h>
#include <stdlib.h>
/*
presentar os N primeiros n�meros pares informados pelo usu�rio.
Se o usu�rio informar um n�mero negativo transform�-lo em positivo antes de utilizar.
Por exemplo:
Informe a quantidade de n�meros pares a serem mostrados:
3
mostrar:
Os 3 primeiros n�meros pares s�o:  2 4 6
*/

int main (void)
{
    char Continuar;
    int Num,Qtpares,Paresm;

    do
    {
        system("cls");

        printf("Informe a quantidade de n�meros pares a serem mostrados: ");
        scanf("%d",&Qtpares);
        Num=2;
        Paresm=0;

        if(Qtpares < 0)
        {
            Qtpares *= -1;
        }

        do
        {
            if(Num % 2 == 0)
            {
                printf("%d\t",Num);
                Paresm++;
            }
            Num++;
        }while(Paresm < Qtpares);








        printf("\nExecutar Novamente (S/s para sim)");
        getchar();
        scanf("%c",&Continuar);

    }while(Continuar == 'S' || Continuar == 's');


    system("pause");
}
