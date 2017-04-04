#include <stdio.h>

int main(){
	
	int i,pares[5], contador = 0;
	
	for (i = 0; i < 5; i++){
		scanf("%i", &pares[i]);
	}
	
	for (i = 0; i < 5; i++){
		
		if(pares[i]%2 == 0){
		contador++;
		}
		
	}
	
	printf("%i valores pares\n", contador);
	
	
	

	
	
	return 0;
}