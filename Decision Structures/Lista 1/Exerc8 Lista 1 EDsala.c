#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo que leia as 3 notas de um aluno e calcule a sua m�dia ponderada, com os pesos:
 2, 3 e 5, respectivamente. E:
a) Se a m�dia obtida est� entre 6 a 10 informar que o aluno est� aprovado;
b) Se a m�dia obtida est� entre 4 e 5.9 informar que o aluno est� em recupera��o. Nesse caso,
ler a nota de recupera��o e calcular a m�dia final (que � a m�dia entre a m�dia anual e a nota de
 recupera��o).
	b.1) Se a m�dia final � menor que 5 informar que o aluno est� reprovado ap�s recupera��o;
	b.2) Se � igual ou maior que 5 informar que o aluno est� aprovado ap�s recupera��o;
c) Se a m�dia obtida � menor que 4 informar que o aluno est� reprovado antes da recupera��o.
*/
int main (void)
{
    int Nota1,Nota2,Nota3;
    int NotaRec;
    float Media,MediaF;

    printf("Informe a primeira nota: ");
    scanf("%d",&Nota1);
    printf("Informe a segunda nota: ");
    scanf("%d",&Nota2);
    printf("Informe a terceira nota: ");
    scanf("%d",&Nota3);

    Media = ((float)Nota1*2 + Nota2*3 + Nota3*5)/10;

    if (Media >= 6)
    {
        printf("Aprovado\n");
    }
    else if (Media >=4 && Media <=6)
    {
        printf("Em Recupera��o\n");
        printf("Informe a nota da recupera��o: ");
        scanf("%d",&NotaRec);
        MediaF = (Media + NotaRec)/2;

        if (MediaF >= 5)
        {
            printf("Aprovado apos recuperacao\n");
        }
        else
        {
            printf("Reprovado apos recuperacao\n");
        }
    }
    else
    {
        printf("Reprovado\n");
    }

    system("pause");
}
