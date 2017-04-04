#include <stdio.h>

int main(){
	
	int x, contador = 0;
	
	scanf("%i", &x);
	
	do{
			
		if(x%2 != 0){
			printf("%i\n", x);
			contador++;
		}
		
		x = x+1;
	} while (!(contador == 6));
	
	
	
	return 0;
}