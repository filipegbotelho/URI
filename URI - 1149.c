/* Filipe Gonçalves
   URI - 1149*/
#include <stdio.h>
int main(void){
    int a, n, i, soma;
    scanf("%i %i", &a, &n);
    while (n <= 0)
        scanf("%i", &n);
    soma = a;
    for (i = 1; i < n; i++)
        soma += (a+i);
    printf("%i\n", soma);
    return 0;
}
