#include <stdio.h>
#include <stdlib.h>

/*
Ler n�meros inteiros informados pelo usu�rio at� ser informado o valor negativo.
Dentre os n�meros informados, exceto o valor negativo que � a condi��o de sa�da:
a) contar a quantidade de n�meros menores que 10 e os maiores que 100;
b) contar a quantidade de n�meros �mpares;
c) contar a quantidade de n�meros divis�veis por 10;
d) contar a quantidade de n�meros entre 10 e 100;
e) contar quantas vezes � informado o n�mero 30;
f) contar quantas vezes � informado um n�mero diferente de 10, de 20 e de 30.
*/
int main (void)
{
    int Num;
    int Qtd=0,Qtd1=0,Qtd2=0,Qtd3=0,Qtd4=0,Qtd5=0;
    char Continuar;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        do
        {
            printf("Informe um Numero: ");
            scanf("%d",&Num);

            if (Num > 0)
            {
                if(Num < 10 || Num > 100)
                {
                    Qtd++;
                }
                else if(Num % 2 != 0)
                {
                    Qtd1++;
                }

                if(Num % 10 == 0)
                {
                    Qtd2++;
                }

                if(Num > 10 && Num < 100)
                {
                    Qtd3++;
                }

                if(Num == 30)
                {
                    Qtd4++;
                }
                if(Num != 10 && Num != 20 && Num != 30)
                {
                    Qtd5++;
                }
            }

        }while(Num > 0);

        printf("\nQuantidade de numeros menores que 10 e os maiores que 100: %d",Qtd);
        printf("\nQuantidade de numeros impares: %d",Qtd1);
        printf("\nQuantidade de numeros divis�veis por 10: %d",Qtd2);
        printf("\nQuantidade de numeros entre 10 e 100: %d",Qtd3);
        printf("\nQuantas vezes foi informado o numero 30: %d",Qtd4);
        printf("\nQuantas vezes foi informado um numero diferente de 10, de 20 e de 30: %d",Qtd5);

        printf("\n____________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');

}
