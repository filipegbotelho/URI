#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main (void){
	
	double a, b, c; //Tr�s vari�veis com dupla precis�o
	
	scanf("%lf %lf %lf", &a, &b, &c);//Lendo as vari�veis
	
	printf("TRIANGULO: %.3lf\n", (a*c)/2); //Calcula e imprime a �rea do tri�ngulo tendo por base c e altura h
	printf("CIRCULO: %.3lf\n", (c*c)*PI); //Calcula e imprime a �rea do c�rculo tendo c por raio
	printf("TRAPEZIO: %.3lf\n", ((a+b)*c)/2); //Calcula e imprime a �rea do trap�zio tendo a e b por base e c por altura
	printf("QUADRADO: %.3lf\n", b*b); //Calcula e imprime a �rea do quadrado tendo b por lado
	printf("RETANGULO: %.3lf\n", a*b); //Calcula e imprime a �rea do ret�ngulo tendo a e b por lados.
	
	
	return 0;
}