/* Filipe Gonçalves
   URI - 1158*/
#include <stdio.h>
int main(void){
    int n, x, y, i, j, soma;
    scanf("%i", &n);
    for (i = 0; i < n; i++){
        scanf("%i %i", &x, &y);
        soma = 0;
        j = 0;
        if (x%2 == 0)
            x++;
        for (j = 0; j < y; j++, x += 2){
            printf("%i\n", x);
            soma += x;
            //x += 2;
        }
        printf("%i\n", soma);
    }

    return 0;
}
