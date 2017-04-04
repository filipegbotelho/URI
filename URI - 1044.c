#include <stdio.h>

int main(){
	
	int a, b;
	
	scanf("%i %i", &a, &b);
	
	if(b%a != 0 && a%b != 0){
		printf("Nao sao Multiplos\n");
	}else{
		printf("Sao Multiplos\n");
	}
	
	
	
	
		
	
	return 0;
}