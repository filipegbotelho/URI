/* Filipe Gonçalves
   URI - 1149*/
#include <stdio.h>
int main(void){
    int n,x[10], i;
    scanf("%i", &n);
    for (i = 0; i < 10; i++){
        x[i] = n;
        printf("N[%i] = %i\n", i, x[i]);
        n = n*2;
    }
    return 0;
}
