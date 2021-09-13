#include <stdio.h>
#include <stdlib.h>

/*
Elaborar um programa para subtrair duas datas, subtrair da data mais recente a mais antiga.
Apresentar o resultado, a diferen�a, em anos, meses e dias. O usu�rio pode informar as datas
em ordem crescente ou decrescente, caber� ao programa fazer a verifica��o. Considere que os meses
possuem 30 dias. Para ler um valor no formato data armazenando-o em tr�s vari�veis distintas �
poss�vel utilizar o scanf com a seguinte sintaxe:
	scanf(�%d/%d/%d�,&dia,&m�s,&ano);  Observar a barra entre o 1� e o 2� e entre o 2� e o 3� s�mbolos de %
	O usu�rio digitar� a data no formato: 12/12/2008, incluindo as barras, e cada vari�vel ter� o seu
	respectivo valor armazenado.

*/
int main (void)
{

    int Dia1,Mes1,Ano1,Dia2,Mes2,Ano2,Dia,Mes,Ano,Td1,Td2,Td;
    char Continuar;

    do
    {
        system("cls");

        printf("\n_______________________________________________________________________________\n");
        printf("\nInforme a primeira data (ex: 10/11/2012): ");
        scanf("%d/%d%/%d",&Dia1,&Mes1,&Ano1);
        printf("\n_______________________________________________________________________________\n");
        printf("\nInforme a segunda data (ex: 10/11/2012): ");
        scanf("%d/%d%/%d",&Dia2,&Mes2,&Ano2);

        system("cls");

        Td1 = Dia1 + Mes1*30 + Ano*365;
        Td2 = Dia2 + Mes2*30 + Ano*365;

        if(Td1 > Td2)
        {
            Td = Td1 - Td2;

            Ano = (int)Td / 365;
            Mes = (int)Td % 365/30;
            Dia = Td % 30;
        }
        else
        {
            Td = Td2 - Td1;

            Ano = (int)Td / 365;
            Mes = (int)Td % 365/30;
            Dia = Td % 30;
        }


        printf("\nA diferenca das datas %c de: %d dias,%d meses e %d anos = %d/%d/%d",130,Dia,Mes,Ano,Dia,Mes,Ano);


        printf("\n_______________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
}
