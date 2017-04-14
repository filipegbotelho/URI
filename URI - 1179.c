/* Filipe Gonçalves
   URI - 1179*/
#include <stdio.h>

int main(void){

   int par[5], impar[5], i, n, j, k, l;
   j = k = 0;
   for (i = 0; i < 15; i++){
        scanf("%i", &n);
        if (n%2 == 0){
            par[j] = n;
            j++;
        }
        else{
            impar[k] = n;
            k++;
        }
        if (j == 5){
            for ( l = 0; l < 5; l++)
                printf("par[%i] = %i\n", l, par[l]);
            j = 0;
        }
        else if (k == 5){
            for ( l = 0; l < 5; l++)
                printf("impar[%i] = %i\n", l, impar[l]);
            k = 0;
        }
    }
    for (l = 0; l < k; l++)
        printf("impar[%i] = %i\n", l, impar[l]);
    for (l = 0; l < j; l++)
        printf("par[%i] = %i\n", l, par[l]);

    return 0;
}
