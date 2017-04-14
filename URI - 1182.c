/* Filipe Gonçalves
   URI - 1182*/
#include <stdio.h>
int main(void){

    int c, i, j;
    char caracter;
    double matriz[12][12], soma;
    scanf("%i", &c);
    scanf(" %c", &caracter);
    soma = 0.0;
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++)
            scanf("%lf", &matriz[i][j]);
    }
    for (i = 0; i < 12; i++)
        soma += matriz[i][c];
    if (caracter == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", soma/12.0);

    return 0;
}
