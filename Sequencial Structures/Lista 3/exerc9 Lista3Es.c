#include <stdio.h>
#include <stdlib.h>
/*
Uma livraria fez uma promo��o para pagamento � vista em que o comprador pode escolher entre dois
crit�rios de desconto:
1) 0,25 por livro + 7,50 fixo
2) 0,5 por livro + 2,5 fixo
Fazer um programa em que o usu�rio digita a quantidade de livros que deseja comprar e o programa
diz qual a melhor op��o de desconto.
*/

int main (void)
{

    float Qlivros,desconto1, desconto2;

    printf("Informe a quantidade de livros: ");
    scanf("%d",&Qlivros);

    desconto1 = Qlivros * 0.25 + 7.5;
    desconto2 = Qlivros * .5 + 2.5;

    printf("

    system("pause");
}
