/* Filipe Gonçalves
   URI - 1190 */
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
    for (i = 7; i < 12; i++){
        for (j = 12 - i; j < i; j++)
            soma += m[j][i];
    }
    letra == 'M' ? printf("%.1f\n", soma/30) : printf("%.1f\n", soma);
    return 0;
}
