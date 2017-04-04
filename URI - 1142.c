#include <stdio.h>

int main(void){

    int n, i, j, k;
    scanf("%i", &n);
    k = 1;
    for(i = 0; i < n; i++){
        for(j = 0; j < 3; j++){
            printf("%i ", k);
            k++;
        }
        printf("PUM \n");
        k++;
    }

    return 0;
}
