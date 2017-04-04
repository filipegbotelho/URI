#include <stdio.h>


int main(){
	
	int i, positivo = 0;
	float numero[6];
	
	for (i = 0; i < 6; i++){
		scanf("%f", &numero[i]);
		
		if (numero[i] > 0){
			positivo++;
		}
	}
	
	printf("%i valores positivos\n", positivo);

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}