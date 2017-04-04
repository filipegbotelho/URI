#include<stdio.h>


int main(){
	
	double salario, total_de_vendas,salario_total;
	char nome[100];
	gets(nome);
	scanf("%lf %lf", &salario, &total_de_vendas);
	salario_total=(total_de_vendas*0.15)+salario;
	printf("TOTAL = R$ %.2lf\n", salario_total);
	
	
	return 0;
}