#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

/*
Validar um endere�o de email, utilizando as seguintes regras:
a) ter um e somente um s�mbolo de @;
b) @ n�o pode ser o primeiro caractere;
c) n�o pode finalizar com @, tem que ter pelo menos um caractere ap�s;
d) n�o pode haver espa�os em branco entre os caracteres do endere�o.
Definir uma fun��o para essa valida��o. A fun��o retorna 's' se o e-mail � v�lido, de acordo com as regras,
e 'n' se n�o for v�lido.

*/

int main (void)
{
    char Continuar,email[30];
    int i,j,Cont,Cont2;

    do
    {
        system("cls");

        i=j=0;
        Cont=Cont2=0;

        printf("Informe seu E-Mail: ");
        fflush(stdin);
        gets(email);


        for(i=0;email[i] != '\0';i++)
        {
            j++;
        }



        for(i=0;i<j;i++)
        {
            if(email[i] == '@')
            {
                Cont++;
            }
            if(email[i] == ' ')
            {
                Cont2++;
            }

        }


        if(Cont == 1 && email[0] != '@'&& email[j] != '@' && Cont2 == 0)
        {
            printf("\n\nEmail Valido\n\n");

        }
        else
        {
            printf("\n\nEmail Invalido\n\n");
        }


        printf("\n\nPara executar novamente: ");
        fflush(stdin);
        scanf("%c",&Continuar);
    }while(Continuar == 's' || Continuar == 'S');

}
