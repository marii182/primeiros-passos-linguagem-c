#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
	int jogador, computador;
	srand(time(NULL));
	
	printf("Bem-vindo ao jogo de Pedra, Papel ou Tesoura!\n");
	printf("Escolha o numero da sua ARMA: \n");
	printf("1 - Pedra\n");
	printf("2 - Papel\n");
	printf("3 - Tesoura\n");
	scanf("%d",&jogador);
	
	
	switch(jogador){
		case 1:
			printf("Voce escolheu Pedra.\n");
			break;
		case 2:
			printf("Voce escolheu Papel.\n");
			break;
		case 3:
			printf("Voce escolheu Tesoura.\n");
			break;
		default:
			printf("Numero invalido.\n");
	
	
	}
	
	computador=1+(rand()%3);
	printf("\n");
	
	if(jogador==1){
		if(computador==1){
			printf("Pedra! Empate!");
		}
		else if(computador==2){
			printf("Papel! Computador venceu!");
		
		}
		else if(computador==3){
			printf("Tesoura! Voce venceu!");
			
		}
	}
	else if(jogador==2){
		if(computador==1){
			printf("Pedra! Voce venceu!");
			
		}
		else if(computador==2){
			printf("Papel! Empate");
			
		}
		else if(computador==3){
			printf("Tesoura! Computador venceu!");
			
		}
	}
	else if(jogador==3){
		if(computador==1){
			printf("Pedra! Computador venceu!");
			
		}
		else if(computador==2){
			printf("Papel! Voce venceu");
			
		}
		else if(computador==3){
			printf("Tesoura! Empate");
			
		}
	}
	

	
	
	
	
	return 0;
}
