#include <stdio.h>
#include <stdlib.h>
/*
1) Fazer uma calculadora com as opera��es de soma, subtra��o, multiplica��o,
 divis�o e resto. Cada opera��o � uma fun��o e deve ser acessada a partir de um menu. As fun��es s�o implementadas na pr�prio programa:
a) Soma sem par�metros e sem retorno
b) Subtra��o com par�metros e sem retorno
c) Multiplica��o sem par�metros e com retorno
d) Divis�o com par�metros e com retorno.
e) Resto com par�metros e com retorno.

*/
void Soma (void);
void Subtrair (int Num1, int Num2);//declarar a fun��o
int Multiplicar (void);//cabe�alho de fun��es
float Dividir (int Num1 , int Num2);//tornar O CODIGO DA FUN��O
int Resto (int Num1,int Num2);

int main (void)
{
    char Continuar;
    char Opcao;
    int Valor1,Valor2;
    float Retorno;

    do
    {
        system("cls");
        printf("Calculadora:\n");
        printf("A - Soma\n");
        printf("B - Subtracao\n");
        printf("C - Multiplicacao\n");
        printf("D - Divisao\n");
        printf("E - Resto\n");
        printf("S - Sair\n");
        printf("Opcao: ");
        fflush(stdin);
        scanf("%c",&Opcao);


        switch(Opcao)
        {
            case 'A':
            case 'a':
                //chamar void Soma (void)
                Soma();
                break;
            case 'B':
            case 'b':
                //subtra��o void Subtrair (int Num1, int Num2)
                printf("Informe o primeiro valor: ");
                scanf("%d",&Valor1);
                printf("Informe o segundo valor: ");
                scanf("%d",&Valor2);
                Subtrair(Valor1,Valor2);
                break;
            case 'C':
            case 'c':
                //Multiplica��o
                Retorno = Multiplicar();
                printf("Multiplicacao: %.0f\n",Retorno);
                break;
            case 'D':
            case 'd':
                //Divis�o float Dividir (int Num1,intNum2)
                printf("Informe o primeiro valor: ");
                scanf("%d",&Valor1);
                printf("Informe o segundo valor: ");
                scanf("%d",&Valor2);
                Retorno = Dividir(Valor1,Valor2);
                printf("Divisao : %.2f\n",Retorno);
                break;
            case 'E':
            case 'e':
                //Resto
                printf("Informe o primeiro valor: ");
                scanf("%d",&Valor1);
                printf("Informe o segundo valor: ");
                scanf("%d",&Valor2);
                Retorno = Resto(Valor1,Valor2);
                printf("Resto: %.0f\n",Retorno);
                break;
            case 'S':
            case 's':
                exit(0);
            default:
                printf("Op��o invalida");
        }

        printf("\nExecutar novamente (S/s para sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);
    }while(Continuar == 'S' || Continuar == 's');
}
//fim da main

//a) Soma sem par�metros e sem retorno
void Soma (void)
{
    int Num1,Num2;
    int Resul;

    printf("Informe  primeiro valor: ");
    scanf("%d",&Num1);
    printf("Informe  Segundo valor: ");
    scanf("%d",&Num2);
    Resul = Num1+Num2;
    printf("Soma: %d",Resul);
}
//b) Subtra��o com par�metros e sem retorno
void Subtrair (int Num1, int Num2)
{
    int Resul;
    Resul=Num1-Num2;
    printf("Subtracao: %d\n",Resul);
}
//c) Multiplica��o sem par�metros e com retorno
int Multiplicar (void)
{
    int Num1,Num2;
    int Resul;
    printf("Informe o primeiro valor: ");
    scanf("%d",&Num1);
    printf("Informe o segundo valor: ");
    scanf("%d",&Num2);
    Resul=Num1*Num2;
    return(Resul);
}
//d) Divis�o com par�metros e com retorno.
float Dividir (int Num1, int Num2)
{
    float Resultado;
    Resultado = (float)Num1/Num2;
    return(Resultado);
}
//e) Resto com par�metros e com retorno.
int Resto (int Num1,int Num2)
{
    int Retorno;
    Retorno = Num1 % Num2;
    return (Retorno);
}


