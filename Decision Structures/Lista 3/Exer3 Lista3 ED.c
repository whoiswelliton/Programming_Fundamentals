#include <stdio.h>
#include <stdlib.h>
/*
Ler dois n�meros inteiros informar:
a) Se pelo menos deles � divis�vel por 5.
b) Se somente um deles � divis�vel por 5.
Exemplo: 10 e 15 pelos menos um � divis�vel por 5.
Exemplo: 3 e 5 pelos menos um � divis�vel por 5 e somente um deles � divis�vel por 5.
c) Se ambos s�o pares.
d) Se pelo menos um deles � �mpar.
Nos itens b e c � poss�vel utilizar uma estrutura if else if? Por qu�?
*/
int main (void)
{
    int num, num1;
    printf("Informe o primeiro numero: ");
    scanf("%d",&num);
    printf("Informe o segundo numero: ");
    scanf("%d",&num1);

    if((num%5 == 0) && (num1%5 == 0))
    {
        printf(" Os dois numeros sao divisiveis por 5\n");
    }
    else if((num%5 == 0) && (num1%5 !=0) || (num1%5 == 0) && (num%5 != 0))
    {
        printf("Somente um deles e divisivel por 5\n");
    }
    else if ((num%5/2 == 0) && (num1%5/2 == 0))
    {
        printf("Os dois numeros sao pares\n");
    }
    else
    {
        (num%5/2 == 0) && (num1%5/2 != 0 || (num%5/2 != 0) && (num1%5/2 == 0));
        printf("Pelo menos um numero e impar\n");
    }

    system("pause");
}
