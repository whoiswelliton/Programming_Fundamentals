#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo para ler o n�mero de votos brancos, nulos (incluem eleitores ausentes) e v�lidos
de uma elei��o. E calcular e mostrar o percentual que cada um (brancos, nulos e v�lidos) representa em
 rela��o ao total de eleitores. Lembrar que os valores dos percentuais podem n�o ser inteiros.
*/

int main (void)
{
    float VBranco, VNulo, VValido;
    float Total;

    printf("Informe o Total de Votos Brancos: ");
    scanf("%f",&VBranco);
    printf("Informe o Total de Votos Nulos: ");
    scanf("%f",&VNulo);
    printf("Informe o Total de Votos Validos: ");
    scanf("%f",&VValido);

    Total=VBranco+VNulo+VValido;
    VBranco=(VBranco*100)/Total;
    VNulo=(VNulo*100)/Total;
    VValido=(VValido*100)/Total;

    printf("O Percentual de Votos Validos �: %.2f%%\n",VValido);
    printf("O Percentual de Votos Brancos �: %.2f%%\n",VBranco);
    printf("O Percentual de Votos Nulos �: %.2f%%\n",VNulo);

    system("pause");
}
