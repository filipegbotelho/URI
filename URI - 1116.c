/*Filipe Gonçalves
  URI - 1116*/
#include <stdio.h>
int main(void){

    int i, n, x, y;
    float resultado;
    scanf("%i", &n);
    for(i = 0; i < n; i++){
        scanf("%i %i", &x, &y);
        resultado = (float)x/y;
        if (y == 0)
            printf("divisao impossivel\n");
        else
            printf("%.1f\n", resultado);
    }
    return 0;
}
