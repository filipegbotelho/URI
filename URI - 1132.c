/*Filipe Gonçalves
  URI - 1132*/
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
    while (y <= x){
        if (y%13 != 0){
            soma += y;
        }
        y++;
    }
    printf("%i\n", soma);
    return 0;
}
