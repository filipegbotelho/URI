//Programa para verificar o maior número entre 3
#include <stdio.h>
//Inclui a biblioteca math.h para usar a função abs();
#include <math.h>

int main(){

	int a,b,c;//  Cria as variáveis a,b,c
	
	scanf("%i %i %i", &a, &b, &c);// Ler as 3 variáveis
	 
	printf ("%i eh o maior\n",((a+b+abs(a-b))/2) > c ? ((a+b+abs(a-b))/2) : c);// Verifica o maior número com o operador ternário e imprime o maior


	
	
	
	return 0;
}