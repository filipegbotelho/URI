/* Filipe Gon�alves
   URI - 1185 */
#include <stdio.h>
int main(void){
    int i, j;
    float m[12][12], soma;
    char letra;
    scanf(" %c", &letra);
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++)
            scanf("%f", &m[i][j]);
    }
    soma = 0;
    for (i = 0; i < 12; i++){
        for(j = 10-i; j >= 0; j--)
            soma += m[i][j];
    }
    letra == 'M' ? printf("%.1f\n", soma/66) : printf("%.1f\n", soma);
    return 0;
}
