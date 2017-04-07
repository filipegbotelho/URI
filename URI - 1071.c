/*Filipe Gonçalves
  URI - 1071*/
#include <stdio.h>
int main(void){
	int x, y, aux, soma;
	scanf("%i %i", &x, &y);
	if (x < y){
		aux = x;
		x = y;
		y = aux;
	}
	soma = 0;
	y += 1;
	while (x > y){
		if (y%2 == 1 || y%2 == -1)
			soma += y;
        y++;
	}
	printf("%i\n", soma);
	return 0;
}
