//Programa para calcular a �rea de uma esfera dado o 'raio'
#include <stdio.h>

//Define o valor constante da vari�vel PI
#define PI 3.14159
int main(){
	
	double R;//Vari�vel raio que ser� usada para a f�rmula
	
	scanf("%lf", &R);//Ler o raio digitado
	
	printf("VOLUME = %.3lf\n",(4.0/3)*PI*(R*R*R));//Calcula e imprime o valor da �rea da esfera
	
	
	
	
	
	return 0;
}