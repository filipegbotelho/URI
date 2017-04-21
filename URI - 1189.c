/* Filipe Gonçalves
   URI - 1189 */
#include <stdio.h>
int main(void){
    int i, j;
    float m[12][12], soma;
    char letra;
    scanf(" %c", &letra);
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++)
            scanf("%f", &m[j][i]);
    }
    soma = 0;
    for (i = 0; i < 5; i++){
        for (j = 10 - i; j > i; j--)
            soma += m[i][j];
    }
    letra == 'M' ? printf("%.1f\n", soma/30) : printf("%.1f\n", soma);
    return 0;
}
