#include <stdio.h>
#include <stdlib.h>
#include <Pause.h>

/*
Ler um caractere que representa uma categoria de produtos (A � Alimento; V � Vestu�rio; T � Transporte),
ler um valor que � o valor em reais para essa categoria. Se informada categoria inv�lida, informar que a
 mesma � inv�lida. Se informada categoria v�lida, para a categoria transporte acrescentar 12% ao valor
 informado e para a categoria vestu�rio diminuir 5%. Apresentar o valor final conforme a op��o, isto �,
 considerando o acr�scimo para transporte ou a redu��o para vestu�rio.
*/
int main (void)
{
    float Num,Imp,Fin;
    char Continuar,A,V,T,Cat;
    do
    {
        system("cls");
        printf("\n________________________________________________________________________________\n");
        printf("Informe a categoria que deseja investir(A � Alimento; V � Vestu�rio; T � Transporte): ");
        scanf("%c",&Cat);

        system("cls");

        if(Cat == 'A' || Cat == 'a')
        {
            printf("\nQuanto voc� deve aplicar nessa categoria: ");
            scanf("%f",&Num);

            printf("\nIvestimento final = %.2f",Num);

        }
        else if(Cat == 'V' || Cat == 'V')
        {
            printf("\nQuanto voc� deve aplicar nessa categoria: ");
            scanf("%f",&Num);

            Imp = (Num*5)/100;
            Fin = Num - Imp;
            printf("\nIvestimento final = %.2f",Fin);

        }
        else if(Cat == 'T' || Cat == 'T')
        {
            printf("\nQuanto voc� deve aplicar nessa categoria: ");
            scanf("%f",&Num);

            Imp = (Num*12)/100;
            Fin = Num + Imp;
            printf("\nIvestimento final = %.2f",Fin);
        }
        else
        {
            printf("Categoria Invalida!");
        }

        printf("_________________________________________________________________________________\n\n");
        printf("\n                           Executar Novamente (S/s para Sim): ");
        fflush(stdin);
        scanf("%c",&Continuar);

    }while(Continuar == 's' || Continuar == 'S');
    Pause();
}
