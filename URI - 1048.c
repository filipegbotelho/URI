#include <stdio.h>

int main(){

	double salario, salario_antigo;
	
	scanf("%lf", &salario);
	
	salario_antigo = salario;
	
	if (salario >= 0 && salario <= 400){
		salario = salario * 1.15;
	}else if (salario >= 400.01 && salario <= 800.00){
		salario = salario * 1.12;
	}else if (salario >= 800.01 && salario <= 1200.00){
		salario = salario * 1.10;
	}else if (salario >= 1200.01 && salario <= 2000.00){
		salario = salario * 1.07;
	}else {
		salario = salario * 1.04;
	}
	
	printf("Novo salario: %.2lf\n",salario);
	printf("Reajuste ganho: %.2f\n",salario - salario_antigo);
	printf("Em percentual: %.0f %%\n",((salario/salario_antigo)-1)*100);



	return 0;
}