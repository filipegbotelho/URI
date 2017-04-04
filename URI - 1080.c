#include <stdio.h>

int main(){
	
	int vetor[100], i, maior, n = 0;
	
	for (i = 0; i < 100; i++){
		scanf("%i", &vetor[i]);
	}
		maior = vetor[n];	
		
	for (i = 0; i < 100; i++){

		if (vetor[n] < vetor[i]){
			maior = vetor[i];
			n = i;
		} 
	}
	
	printf("%i\n%i\n", maior,n+1);	
	
	
	
	
	
	
	
	return 0;
}