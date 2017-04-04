/*Filipe Gonçalves
  URI - 1180*/
#include <stdio.h>
int main(void){
    int n, x[1000], valor = 1000, posicao, i;
    scanf("%i", &n);
    for(i = 0; i < n; i++){
        scanf("%i", &x[i]);
        if (x[i] < valor){
            valor = x[i];
            posicao = i;
        } 
        
    }
    printf("Menor valor: %i\n", valor);
    printf("Posicao: %i\n", posicao);
    return 0;
}