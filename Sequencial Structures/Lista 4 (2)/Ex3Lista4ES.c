#include <stdio.h>
#include <stdlib.h>

/*
O c�digo a seguir tem como objetivos:
a) fazer a divis�o float entre dois valores inteiros informados pelo usu�rio;
b) Obter o resto da divis�o do primeiro n�mero pelo segundo n�mero;
*/
int main (void)
{
    int Num1,Num2;
    float Divisao;
    int Resto;

    char Continuar;
    do
    {
        system("cls");

        printf("Informe o primeiro valor: ");
        scanf("%d",&Num1);
        printf("Informe o segundo valor: ");
        scanf("%d",&Num2);

        Divisao = (float)(Num1/Num2);
        Resto = Num1 % Num2;

        printf("A divis�o de %d por %d e: %.2f\n",Num1,Num2,Divisao);
        printf("O resto da divis�o e: %d\n",Resto);

        printf("\n_____________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
