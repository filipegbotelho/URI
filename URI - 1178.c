/* Filipe Gonçalves
   URI - 1178*/
#include <stdio.h>
int main(void){
    int i;
    double x, n[100];
    scanf("%lf", &x);
    for (i = 0; i < 100; i++){
        n[i] = x;
        printf("N[%i] = %.4lf\n", i, n[i]);
        x /= 2;
    }
    return 0;
}
