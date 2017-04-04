/*Filipe Gonçalves
  URI - 1143*/
#include <stdio.h>
int main(void){
    int n, i;
    scanf("%i", &n);
    for (i = 1; i <= n; i++)
        printf("%i %i %i\n", i, i*i, i*i*i);
    return 0;
}
