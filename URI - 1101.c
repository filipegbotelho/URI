/* Filipe Gonçalves
   URI - 1101*/
#include <stdio.h>
int main(void){
    int m, n, aux, soma;
    do{
        scanf("%i %i", &m, &n);
        if (m <= 0 || n <= 0)
            break;
        if (m < n){
            aux = m;
            m = n;
            n = aux;
        }
        soma = 0;
        while (n <= m){
            printf("%i ", n);
            soma += n;
            n++;
        }
        printf("Sum=%i\n", soma);
    }while(n > 0 || m > 0);
    return 0;
}
