/* Filipe Gonçalves
   URI - 2533*/
#include <stdio.h>
int main(void){
    int m, n, c, i, soma[2];
    while (scanf("%i", &m) != EOF){
        soma[0] = soma[1] = 0;
        for (i = 0; i < m; i++){
            scanf("%i %i", &n, &c);
            soma[0] += n*c;
            soma[1] += c*100;
        }
        printf("%.4f\n", (float)soma[0]/(float)soma[1]);
    }
    return 0;
}
