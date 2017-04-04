//Programa para verificar o maior número entre 3
#include <stdio.h>


int main(){

	int km;// Variável quilômetro
	float l;//Variável litro
	
	scanf("%i %f", &km, &l);//Ler as informações do usuário e armazena em km e l
	
	printf("%.3f km/l\n",(float)km/l);//Calcula e imprime o resultado
	
	return 0;
}