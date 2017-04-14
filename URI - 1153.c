/* Filipe Gonçalves
   URI - 1153*/
#include <stdio.h>
int main(void){
    short int n, i, soma;
    scanf("%i", &n);
    soma = 1;
    for (i=n; i >= 1; i--){
        soma *= i;
    }
    printf("%i\n",soma);
    return 0;
}
