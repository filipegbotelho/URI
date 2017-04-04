#include <stdio.h>

int main(){
	
	int i,j,n;
	
	scanf("%i", &n);
	
	float matriz[n][3], soma = 0;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < 3; j++){
			scanf("%f", &matriz[i][j]);
		
		}
	
	}


	for(i = 0; i < n; i++){
		soma = 0;
		for(j = 0; j < 3; j++){
			switch (j){
				case 0:
					soma = soma + (matriz[i][j]*2);
					break;
				
				case 1:
					soma = soma + (matriz[i][j]*3);
					break;
				case 2:
					soma = soma + (matriz[i][j]*5);
					break;	
			}			
		}
		printf("%.1f\n",(float)soma/10);
	}
	
	
	
	
	
	
	return 0;
}