/* Filipe Gonçalves
   URI - 1151 */
#include <stdio.h>
int main(void){
    int n, i, a, b, aux;
    scanf("%i", &n);
    printf("0 1");
    a = 0;
    b = 1;
    for (i = 0; i < n-2; i++){
        aux = a + b;
        a = b;
        b = aux;
        printf(" %i", aux);
    }
    printf("\n");
    return 0;
}
