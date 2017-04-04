#include<stdio.h>

int main(){
	
	int duracao_segundos, horas, minutos, segundos;
	
	scanf("%i", &duracao_segundos);
	
	horas = (float)duracao_segundos / 3600;
	
	minutos = (float)((duracao_segundos-(horas * 3600))) / 60;
	
	segundos = (float)(duracao_segundos%60); 
	
	printf("%i:%i:%i\n",horas, minutos,segundos);
	
	
	
	return 0;
}