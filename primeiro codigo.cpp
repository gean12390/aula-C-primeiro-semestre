#include <stdio.h>

int main(){
	
	printf("********************\n");
	printf("*jogo de advinhacao*\n");
	printf("********************\n");

	int numerosecreto= 42;
	int chute;
	
	for(int i=1; i<=5; i++){
		printf("Tentativa %d de 5\n",i);
	
	printf("qual o seu chute?\n");
	scanf("%d" , &chute);
	
	int acertou = (chute == numerosecreto);
	

	if(acertou){
		printf("parabens vc acertou\n");	
		
	break;
}
	else{
		int maior= chute>numerosecreto;
		
		if(maior){
			
			printf("seu chute foi maior que o numero secreto\n");	
			
			
			
		}
		else{
				printf("seu chute foi menor que o numero secreto \n");
			}
				
	}
	
	

	}
 return 0;
}
