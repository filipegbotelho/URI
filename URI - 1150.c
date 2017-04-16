/* Filipe Gonçalves
   URI - 1150*/
#include <stdio.h>
int main(void){
    int x, z, qtd, soma;
    scanf("%i %i", &x, &z);
    while(z <= x)
        scanf("%i", &z);
    qtd = soma = 0;
    while (soma <= z){
        soma += x;
        qtd++;
        x++;
    }
    printf("%i\n", qtd);
    return 0;
}
