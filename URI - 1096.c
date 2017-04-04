#include <stdio.h>

int main(){
	
	int i, j ;
	
	for(i = 1; i <= 9; i+=2){
		j = 7;
		for(j ; j >= 5; j--){
		printf("I=%i J=%i\n",i,j);
		}
	}
		
	
	return 0;
}