/* Filipe Gonçalves
   URI - 1144*/
#include <stdio.h>
int main(void){
    int n, i;
    scanf("%i", &n);
    for (i = 1; i <= n; i++){
        printf("%i %i %i\n", i, i*i, i*i*i);
        printf("%i %i %i\n", i, i*i+1, i*i*i+1);
    }
    return 0;
}
