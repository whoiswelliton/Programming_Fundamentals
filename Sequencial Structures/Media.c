#include<stdio.h> //biblioteca de fun��es
/* Programa em linguagem C para calcular a media de dois n�meros
   Entrada:
      Numero 1
      Numero 2
   Processamento
      M�dia = (N�mero 1 + N�mero 2) / 2
   Sa�da
      M�dia
*/

int main (void)//fun��o principal
{//chave de in�cio de bloco de instru��es
    printf("C�lculo da m�dia \n");

    //declarar vari�veis
    int Numero1; //reservar espa�o de mem�ria para armazenar um valor inteiro.
    int Numero2;//v�riavel que identifica um endere�o de mem�ria que sera usado.
    float Media;//Media � o nome da vari�vel

    //entrada
    printf("Informe o primeiro valor: ");
    scanf("%d",&Numero1);//armezenar valor na mem�ria
    printf("Informe o segundo valor; ");
    scanf("%d",&Numero2);

    //processamento
    Media = (Numero1 + Numero2) / 2;

    //sa�da
    printf("A m�dia �: %f \n",Media);
}//fim do bloco de instru��es
