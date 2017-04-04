//Programa para calcular a área de uma esfera dado o 'raio'
#include <stdio.h>

//Define o valor constante da variável PI
#define PI 3.14159
int main(){
	
	double R;//Variável raio que será usada para a fórmula
	
	scanf("%lf", &R);//Ler o raio digitado
	
	printf("VOLUME = %.3lf\n",(4.0/3)*PI*(R*R*R));//Calcula e imprime o valor da área da esfera
	
	
	
	
	
	return 0;
}