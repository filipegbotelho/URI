/* Filipe Gonçalves
   URI - 1146*/
#include <stdio.h>
int main(void){
    int n, i;
    while (1){
        scanf("%i", &n);
        if (n == 0)
            break;
        i = 1;
        while(i <= n){
            printf("%i", i);
            if (i != n)
                printf(" ");
            else
                printf("\n");
            i++;
        }
    }
    return 0;
}
