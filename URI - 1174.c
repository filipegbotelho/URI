/* Filipe Gonçalves
   URI - 1174*/
#include <stdio.h>
int main(void){
    int i;
    double a[100];
    for (i = 0; i < 100; i++){
        scanf("%lf", &a[i]);
        if (a[i] <= 10.0)
            printf("A[%i] = %.1f\n", i, a[i]);
    }
    return 0;
}
