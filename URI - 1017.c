/*Programa que calcula litros usados na viagem*/
#include<stdio.h>

#define CONSUMO 12//Define o consumo do autom�vel como 12km/l
int main(){
	
	int tempo_gasto;//vari�vel para armazenar o tempo gasto
	int distancia_percorrida;//vari�vel para armazenar a distancia percorrida
	
	scanf("%i %i", &tempo_gasto,&distancia_percorrida);//Leitura das vari�veis
	
	printf("%.3f\n",(float)tempo_gasto*distancia_percorrida/CONSUMO);//Calcula e imprime os litros gastos, tendo que o carro faz 12 km/l
	
	
	return 0;
}