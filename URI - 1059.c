#include <stdio.h>

int main(){
	
	int i,pares[101];
	
	for (i = 1; i < 101; i++){
		pares[i] = i;
	}
	
	for (i = 1; i < 101; i++){
		
		if(pares[i]%2 == 0){
		printf("%i\n",pares[i]);
		}
		
	}
	
	
	

	
	
	return 0;
}