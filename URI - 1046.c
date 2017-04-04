#include <stdio.h>

int main(){
	
	int h_inicio,h_fim;
	
	scanf("%i %i", &h_inicio, &h_fim);
	
	if (h_fim <= h_inicio){
		printf("O JOGO DUROU %i HORA(S)\n",(h_fim+24)-h_inicio);
	}else{
		printf("O JOGO DUROU %i HORA(S)\n",h_fim - h_inicio);
	}
	
		
	
	return 0;
}