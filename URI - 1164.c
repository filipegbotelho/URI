/* Filipe Gonçalves
   URI - 1164*/
#include <stdio.h>
int main(void){
    int i, n, x, soma;
    scanf("%i", &n);
    while(n--){
        scanf("%i", &x);
        soma = 0;
        for (i = 1; i < x; i++){
            if (x%i == 0)
                soma = soma + i;
        }
        if (soma == x)
            printf("%i eh perfeito\n", x);
        else
            printf("%i nao eh perfeito\n", x);
    }
    return 0;
}
