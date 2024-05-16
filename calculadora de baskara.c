#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float a, b, c;

    printf("\t \n Calculadora de baskara\n");
    system("pause");
    system("cls");

    printf("indique o valor de 'a': ");
    scanf("%f", &a);

    printf("\n indique o valor de 'b': ");
    scanf("%f", &b);

    printf("\n indique o valor de 'c': ");
    scanf("%f", &c);

    /* Formula é igual a:

    exemplo de equação 2° grau:

    2x² - (-7x) + 3 = 0

        Δ= b² - 4.a.c

        (-b ± √Δ)/2
    
    */

    float delta = ((b*b) - 4*a*c);
    float formula_1 = ((b*(-1)) + sqrt(delta))/(2*a);
    float formula_2 = ((b*(-1)) - sqrt(delta))/(2*a);
    system("cls");
    
    if( delta <= 0){
        printf("\n \t O delta e menor ou igual a 0 \n");
        system("pause");
        return 1;
    }
    else{
    printf(" X E IGUAL A:\n"); 
    printf("\t '+' = %.2f\n", formula_1);
    printf("\t '-' = %.2f\n", formula_2);
    }
    system("pause");
}