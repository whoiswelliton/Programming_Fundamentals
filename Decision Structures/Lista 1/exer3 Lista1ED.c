#include <stdio.h>
/*
Elaborar um algoritmo que leia uma letra. Se informado �F� ou �f� mostrar a mensagem �pessoa f�sica�,
se informado �J� ou �j� mostrar a mensagem �pessoa jur�dica� ou "tipo de pessoa inv�lido" para qualquer
 outro caractere.
*/
int main (void)
{
    char Tipo;

    printf("Informe o tipo de empresa: ");
    scanf("%c",&Tipo);

    if (Tipo == 'f' || Tipo 'F')
    {
       printf(" pessoa fisica");
    }
    else if (Tipo == 'j' || Tipo == 'J')
    {
       printf("pessoa jur�dica");
    }
    else// qualquer outro caractere
    {
      printf("tipo invalido");
    }
}
