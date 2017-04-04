#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main (void){
	
	double a, b, c; //Três variáveis com dupla precisão
	
	scanf("%lf %lf %lf", &a, &b, &c);//Lendo as variáveis
	
	printf("TRIANGULO: %.3lf\n", (a*c)/2); //Calcula e imprime a área do triângulo tendo por base c e altura h
	printf("CIRCULO: %.3lf\n", (c*c)*PI); //Calcula e imprime a área do círculo tendo c por raio
	printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2); //Calcula e imprime a área do trapézio tendo a e b por base e c por altura
	printf("QUADRADO: %.3lf\n", b*b); //Calcula e imprime a área do quadrado tendo b por lado
	printf("RETANGULO: %.3lf\n", a*b); //Calcula e imprime a área do retângulo tendo a e b por lados.
	
	
	return 0;
}