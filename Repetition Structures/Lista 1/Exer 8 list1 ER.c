#include <stdio.h>
#include <stdlib.h>
/*
Fazer um programa que fa�a o levantamento dos candidatos que se inscreveram em uma empresa.
Considerando que para cada candidato a empresa tenha obtido as seguintes informa��es:
	. idade
	. sexo (M ou F)
	. possui curso superior (S ou N)
	Fa�a um programa para determinar:
a) a quantidade de candidatos;
b) a quantidade de candidatas;
c) a idade m�dia dos homens sem curso superior;
d) a menor idade entre as mulheres com curso superior;
Estabelecer uma condi��o para finalizar a entrada de dados do programa. Por exemplo, idade negativa.
 Se idade negativa n�o ler as informa��es de sexo e curso superior.
*/
int main (void)
{
    char Sexo,Curso;
    int Idade=1,QtdeCandidatos=0,QtdeCandidatas=0;
    int SomaIdadesHSC=0,QtdeHSC=0;
    int Menoridade=999;
    float Media;

    while(Idade > 0)
    {
        printf("Informe a idade: ");
        scanf("%d",&Idade);
        if (Idade >0)
        {
            printf("Informe o sexo (F/f/M/m): ");
            fflush(stdin);
            scanf("%c",&Sexo);
            printf("Possui curso superior (s/S/N/n): ");
            fflush(stdin);
            scanf("%c",&Curso);
            if(Sexo == 'm' || Sexo == 'M')
            {
                QtdeCandidatos++;
                if (Curso == 'n' || Curso == 'N')
                {
                    SomaIdadesHSC = SomaIdadesHSC + Idade;
                    QtdeHSC;
                }
            }
            else if(Sexo == 'f' || Sexo == 'F')
            {
                QtdeCandidatas=QtdeCandidatas+1;
                if(Curso == 's' || Curso == 'S')
                {
                    if(Idade < Menoridade)
                    {
                        Menoridade=Idade;
                    }
                }
            }
        }
  }
    printf("Quantidade de candidatos: %d\n",QtdeCandidatos);
    printf("Qunatidade de candidatas: %d\n",QtdeCandidatas);

    if(QtdeHSC > 0)
    {
        Media = (float) SomaIdadesHSC/QtdeHSC;
        printf("a media de idade dos homens : %.2f\n",Media);
    }
    if(Menoridade !=999)
    {
        printf("Menor idade entre as mulheres: %d\n",Menoridade);
    }


    system("pause");
}
