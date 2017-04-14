#include <stdio.h>

int main(){
	
	long int n, i;
	
	scanf("%li", &n);
	
	int valor[n];
	
	for (i = 0; i < n; i++){
		scanf("%li", &valor[i]);

	}
	
	for(i = 0; i < n; i++){
		if (valor[i] == 0){
		printf("NULL\n");
		} 
		
		else if (valor[i] != 0){
			
			if (valor[i]%2 != 0){
				printf("ODD ");
			} else{
				printf("EVEN ");
			}
			
			if (valor[i] > 0){
				printf("POSITIVE\n");
			}else{
				printf("NEGATIVE\n");
			}
		
		}
	}

	
	
	
	
	
	
	
	return 0;
}