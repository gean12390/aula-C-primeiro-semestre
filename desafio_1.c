#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha;

    printf("Qual a sua idade?:\n");
    scanf("%d", &escolha);

    if (escolha <= 5)
    {
        printf("Pre-mirim\n");
    }
    else if (escolha <= 9)
    {
        printf("Mirim\n");
    }
    else if (escolha <= 13)
    {
        printf("Infantil\n");
    }
    else if (escolha <= 17)
    {
        printf("Juvenil\n");
    }
    else if (escolha >= 18)
    {
        printf("Senior\n");
    }
    printf("pressione 1 para sair\n");
    scanf("%d", &escolha);
}