#include <stdio.h>

int main(void){
	//
	int a[2]; // para armazenar numero da peça
	int b[2]; // para armazenar quantidade da peça
	float c[2]; // para armazenar preço da peça
	
	/*Leitura de todas as variáveis*/
	scanf("%i %i %e", &a[0], &b[0], &c[0]);
	scanf("%i %i %e", &a[1], &b[1], &c[1]);
	
	/*Calcula valor a pagar e mostra na tela com duas casas decimais*/
	printf("VALOR A PAGAR: R$ %.2f\n", (float) (b[0]*c[0])+(b[1]*c[1]));
	
	
	return 0;
}