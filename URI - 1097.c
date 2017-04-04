#include <stdio.h>

int main(){
	
	int i, j = 7,k = 5;
	
	for(i = 1; i <= 9; i+=2){

		for(j ; j >= k; j--){
		printf("I=%i J=%i\n",i,j);

		}
		j = j + 5;
		k = k + 2;
	}
		
	
	return 0;
}