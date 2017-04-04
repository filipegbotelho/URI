#include <stdio.h>


int main(){
	
	int i, positivo = 0, indice;
	float numero[6], media = 0, soma = 0;
	
	for (i = 0; i < 6; i++){
		scanf("%f", &numero[i]);
		
		if (numero[i] > 0){
			positivo++;
			soma = soma + numero[i];
			indice++;
		}
	 	
	
	}
	
	media = soma/indice;
		
	printf("%i valores positivos\n", positivo);
	printf("%.1f\n", media);

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}