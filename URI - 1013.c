//Programa para verificar o maior n�mero entre 3
#include <stdio.h>
//Inclui a biblioteca math.h para usar a fun��o abs();
#include <math.h>

int main(){

	int a,b,c;//  Cria as vari�veis a,b,c
	
	scanf("%i %i %i", &a, &b, &c);// Ler as 3 vari�veis
	 
	printf ("%i eh o maior\n",((a+b+abs(a-b))/2) > c ? ((a+b+abs(a-b))/2) : c);// Verifica o maior n�mero com o operador tern�rio e imprime o maior


	
	
	
	return 0;
}