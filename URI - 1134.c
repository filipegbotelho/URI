/* Filipe Gonçalves
   URI - 1134*/
#include <stdio.h>
int main(void){
    int comb[3] = {0,0,0}, n;
    while (1){
        scanf("%i", &n);
        while (n > 4 || n < 0)
            scanf("%i", &n);
        if (n == 1)
            comb[0]++;
        else if (n == 2)
            comb[1]++;
        else if (n == 3)
            comb[2]++;
        else
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", comb[0]);
    printf("Gasolina: %i\n", comb[1]);
    printf("Diesel: %i\n", comb[2]);
    return 0;
}
