#include <stdio.h>

int main(){
	
	int i, numero[5], par, impar, positivo, negativo;
	
	par = impar = positivo = negativo = 0;
	
	for(i = 0; i < 5; i++){
	scanf("%i", &numero[i]);
	}
	
	for (i = 0; i < 5; i++){
		if(numero[i]%2 != 0){
			impar++;
		} else{
			par++;
		}
		
		if(numero[i] > 0){
			positivo++;
		} else if(numero[i] < 0){
			negativo++;
		}
	}
	
	
	printf("%i valor(es) par(es)\n",par);
	printf("%i valor(es) impar(es)\n",impar);
	printf("%i valor(es) positivo(s)\n",positivo);
	printf("%i valor(es) negativo(s)\n",negativo);
	
	
	
	
	return 0;
}