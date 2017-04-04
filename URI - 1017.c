/*Programa que calcula litros usados na viagem*/
#include<stdio.h>

#define CONSUMO 12//Define o consumo do automóvel como 12km/l
int main(){
	
	int tempo_gasto;//variável para armazenar o tempo gasto
	int distancia_percorrida;//variável para armazenar a distancia percorrida
	
	scanf("%i %i", &tempo_gasto,&distancia_percorrida);//Leitura das variáveis
	
	printf("%.3f\n",(float)tempo_gasto*distancia_percorrida/CONSUMO);//Calcula e imprime os litros gastos, tendo que o carro faz 12 km/l
	
	
	return 0;
}