#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;

    printf("escolha uma das opcoes: [1] Bateria [2] pilha [3] recarregavel\n");
    scanf("%d", &escolha);

   
    float y;

    printf("digite o valor do brinquedo:\n");
        scanf("%f", &y);
       float resul_1 = y * 0.9;
       float resul_2 = y * 0.95;


    switch (escolha){
    case 1:

        if (y > 1000)
        {
            printf("O valor total apos o desconto foi de R$%.2f\n", resul_1);
        }

        else
        {
            printf("o valor total do produto foi de R$ %.2f\n", y);
        }

        break;

    case 2:
    if (y > 100)
        {
            printf("O valor total apos o desconto foi de R$%.2f\n", resul_2);
        }

        else
        {
            printf("o valor total do produto foi de R$%.2f\n", y);
        }
        break;

    case 3:
        if (y > 500)
        {
            printf("O valor total apos o desconto foi de R$%.2f\n", resul_1);
        }

        else
        {
            printf("o valor total do produto foi de R$%.2f\n", y);
        }
        break;

    default:
        break;
    }
    int q = 1;
    printf("pressione 1 para sair ");
    scanf("%d" , &q );
}