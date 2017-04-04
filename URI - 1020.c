#include<stdio.h>

#define ANO 365
#define MES 30

int main(){
	
	int idade_dias,ano,mes,dia;
	
	scanf("%i", &idade_dias);
	
	ano = idade_dias/ANO;
	mes = (idade_dias%ANO)/MES;
	dia = (idade_dias%ANO)%MES;
	
	printf("%i ano(s)\n",ano);
	printf("%i mes(es)\n",mes);
	printf("%i dia(s)\n",dia);
	
	
	
	
	return 0;
}