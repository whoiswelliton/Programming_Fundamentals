#include <stdio.h>
#include <stdlib.h>
#include <Pause.h>

/*
Ler uma string. Percorrer essa string armazenando em outra os caracteres em �ndice par e em outra os
caracteres em �ndice �mpar. � indispens�vel finalizar as strings geradas, ou seja, armazenar �\0�,
como �ltimo caractere. Mostrar as tr�s strings.
Dica: Ap�s percorrer a string armazenando os caracteres nos respectivos vetores (cada vetor ter� um
 �ndice pr�prio), armazenar no respectivo �ndice o caractere �\0�. Por exemplo:
VetIndicePar[IndicePar]=�\0�;
VetIndiceImpar[IndiceImpar]=�\0�;
Quando a estrutura de repeti��o que percorreu a string original foi finalizada as vari�veis IndicePar
 e �ndiceImpar cont�m o �ltimo �ndice mais 1, geralmente em uma forma de implementa��o normalmente utilizada.

*/
int main (void)
{
    char Continuar;
    do
    {
        system("cls");


        printf("_____________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
    Pause();
}
