#include <stdio.h>
/*
Elaborar um algoritmo que l� um n�mero que representa uma senha, verifica se a mesma est� correta
ou n�o, comparando-a com 12345 e informa "Acesso autorizado" ou "Acesso negado", conforme o caso.
*/

int main (void)
{
    int SenhaArmazenada=12345;
    int SenhaInformada;

    printf("Informe a Senha ");
    scanf("%d",&SenhaInformada);

    if(SenhaArmazenada == SenhaInformada)//se verdade
    {
       printf("Acesso Autorizado");
    }
    else// se falso
    {
       printf("Acesso Negado");
    }
}
