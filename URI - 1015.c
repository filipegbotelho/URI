//Distância entre dois pontos
#include<stdio.h>
#include<math.h>


int main(void){
	
	float x[2], y[2]; //Cria 2 variáveis de ponto flutuante
	
	scanf("%f %f", &x[0], &y[0]);//Ler as 2 variáveis x[0] e y[0]
	
	scanf("%f %f", &x[1], &y[1]);//Ler as 2 variáveis x[1] e y[1]
	
	printf("%.4f\n", sqrt(pow(x[1]-x[0],2)+pow(y[1]-y[0],2)));
	//Calcula a distância entre dois pontos na fórmula V(x1-x0)²+(y1-y0)² e imprime o resultado.
	
	return 0;
}