//Dist�ncia entre dois pontos
#include<stdio.h>
#include<math.h>


int main(void){
	
	float x[2], y[2]; //Cria 2 vari�veis de ponto flutuante
	
	scanf("%f %f", &x[0], &y[0]);//Ler as 2 vari�veis x[0] e y[0]
	
	scanf("%f %f", &x[1], &y[1]);//Ler as 2 vari�veis x[1] e y[1]
	
	printf("%.4f\n", sqrt(pow(x[1]-x[0],2)+pow(y[1]-y[0],2)));
	//Calcula a dist�ncia entre dois pontos na f�rmula V(x1-x0)�+(y1-y0)� e imprime o resultado.
	
	return 0;
}