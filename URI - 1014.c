//Programa para verificar o maior n�mero entre 3
#include <stdio.h>


int main(){

	int km;// Vari�vel quil�metro
	float l;//Vari�vel litro
	
	scanf("%i %f", &km, &l);//Ler as informa��es do usu�rio e armazena em km e l
	
	printf("%.3f km/l\n",(float)km/l);//Calcula e imprime o resultado
	
	return 0;
}