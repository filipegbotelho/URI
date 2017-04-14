/* Filipe Gonçalves
   URI - 1177*/
#include <stdio.h>
int main(void){
    int t, n[1000], i, j;
    scanf("%i", &t);
    i = 0;
    while (i < 1000){
        j = 0;
        while(j < t && i < 1000){
            printf("N[%i] = %i\n", i, j);
            i++;
            j++;
        }
    }
    return 0;
}
