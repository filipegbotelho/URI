/* Filipe Gonçalves
   URI - 1094 */
#include <stdio.h>
int main(void){

    int n, qtd, coelho, rato, sapo, soma;
    soma = coelho = rato = sapo = 0;
    char animal;
    scanf("%i", &n);
    while(n--){
        scanf("%i %c", &qtd, &animal);
        soma += qtd;
        if (animal == 'C')
            coelho += qtd;
        else if (animal == 'R')
            rato += qtd;
        else
            sapo += qtd;
    }
    printf("Total: %i cobaias\n", soma);
    printf("Total de coelhos: %i\n", coelho);
    printf("Total de ratos: %i\n", rato);
    printf("Total de sapos: %i\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", (float)coelho/soma*100);
    printf("Percentual de ratos: %.2f %%\n", (float)rato/soma*100);
    printf("Percentual de sapos: %.2f %%\n", (float)sapo/soma*100);

    return 0;
}
