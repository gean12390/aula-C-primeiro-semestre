#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//biblioteca de idiomas

int main()
{
//comando para colocar o idioma em português
	setlocale(LC_ALL, "Portuguese");

// variaveis
	float n1, n2, n3, md, md_1, md_2; 

// inicio do programa
	printf("\n\n\tCalculadora de media\n");
	printf("\n\n");
	system("pause\n"); // pausa
	system("cls");	   // limpa o prompt


// irá pedir a nota da N1 e N2
	printf("digite a nota da N1\n");
	scanf("%f", &n1); // escaneia e guarda o valor digitado

	printf("digite a nota da N2\n");
	scanf("%f", &n2); // escaneia e guarda o valor digitado


// formula caso a madia for 6 para cima
	md = (n1 + n2) / 2; 


// caso a madia for igual ou maior q 6 o aluno passou
	if (md >= 6){
			printf("sua media final e de %.2f\n\n", md);
			system("color A");
			printf("\t PASSOU\n\n");
		} 

// caso a nota da N1 for menor q 6, ele irá pedir a nota da N3
	else if (n1 < 6){
			printf("digite a nota da N3\n");
			scanf("%f", &n3);
			md_1 = (n2 + n3) / 2;
			printf("sua media e de %.2f\n\n", md_1);

		if ((n2 + n3) / 2 >= 6) //caso a nota N3 for maior ou igual a 6 (passou)
		{
			system("color A");
			printf("\t PASSOU\n\n");
		}
		else //caso a nota da N3 for menor q 6 (reprovou)
		{
			system("color C");
			printf("\t NAO PASSOU\n\n");
		}
	}


// caso a nota da N2 for menor q 6, ele irá pedir a nota da N3
	else if (n2 < 6){
			printf("digite a nota da N3\n");
			scanf("%f", &n3);
			md_2 = (n1 + n3) / 2;
			printf("sua media e de %.2f\n\n", md_2);
		if ((n1 + n3) / 2 >= 6) //caso a nota N3 for maior ou igual a 6 (passou)
		{
			system("color A");
			printf("\t PASSOU\n\n");
		}
		else//caso a nota da N3 for menor q 6 (reprovou)
		{
			
			system("color C");
			printf("\t NAO PASSOU\n\n");
		}
	}
	system("pause");
	return 0;
}
