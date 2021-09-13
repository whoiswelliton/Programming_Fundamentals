#include <stdio.h>
#include <stdlib.h>
/*
Elabore um programa que leia o dia e o m�s de nascimento de uma pessoa e determine o seu signo
conforme a tabela a seguir:

Intervalo
Signo
de 22/12 at� 20/1
Capric�rnio
de 21/1 at� 19/2
Aqu�rio
de 20/2 at� 20/3
Peixes
de 21/3 at� 20/4
�ries
de 21/4 at� 20/5
Touro
de 21/5 at� 20/6
G�meos
de 21/6 at� 21/7
C�ncer
de 22/7 at� 22/8
Le�o
de 23/8 at� 22/9
Virgem
de 23/9 at� 22/10
Libra
de 23/10 at� 21/11
Escorpi�o
de 22/11 at� 21/12
Sagit�rio
Se informada uma data que n�o corresponda aos intervalos indicados, informar que a data est� inv�lida.
*/
int main (void)
{
    int Dia,Mes;

    printf("Informe sua data de nascimento: ");
    scanf("%d/%d/",&Dia,&Mes);

    if ((Dia >=22 && Mes==12) || (Dia <=20 && Mes ==01))
    {
        printf("Signo = Capricornio\n");
    }
    else if ((Dia >=21 && Mes==01) || (Dia <=19 && Mes ==02))
    {
        printf("Signo = Aquario\n");
    }
    else if ((Dia >=20 && Mes==02) || (Dia <=20 && Mes ==03))
    {
        printf("Signo = Peixes\n");
    }
    else if ((Dia >=21 && Mes==03) || (Dia <=20 && Mes ==04))
    {
        printf("Signo = Aries\n");
    }
    else if ((Dia >=21 && Mes==04) || (Dia <=20 && Mes ==05))
    {
        printf("Signo = Touro\n");
    }
    else if ((Dia >=21 && Mes==05) || (Dia <=20 && Mes ==06))
    {
        printf("Signo = Gemeos\n");
    }
    else if ((Dia >=21 && Mes==06) || (Dia <=21 && Mes ==07))
    {
        printf("Signo = Cancer\n");
    }
    else if ((Dia >=22 && Mes==07) || (Dia <=22 && Mes ==8))
    {
        printf("Signo = Leao\n");
    }
    else if ((Dia >=23 && Mes==8) || (Dia <=22 && Mes ==9))
    {
        printf("Signo = Virgem\n");
    }
    else if ((Dia >=23 && Mes==9) || (Dia <=22 && Mes ==10))
    {
        printf("Signo = Libra\n");
    }
    else if ((Dia >=23 && Mes==10) || (Dia <=21 && Mes ==11))
    {
        printf("Signo = Escorpiao\n");
    }
    else if ((Dia >=22 && Mes==11) || (Dia <=21 && Mes ==12))
    {
        printf("Signo = Sagitario\n");
    }
    else if (Mes > 12 || Dia > 30)
    {
        printf("Data Invalida\n");
    }
    system("pause");
}
