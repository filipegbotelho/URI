#include<stdio.h>

int main(){
	
	long int n, i, aux;
	
	scanf("%li", &n);
	
	for (i = 2; i <= n; i++){
		aux = i;
		
		if (aux%2 == 0 && aux > 0){
			aux = aux*aux;
			printf("%li^2 = %li\n",i,aux);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}