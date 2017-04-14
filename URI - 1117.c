/* Filipe Gonçalves
   URI - 1117*/
/* */
#include <stdio.h>

int main(void){

    int i;
    float n, soma;
    soma = 0;
    i = 0;
    while(i < 3){
        scanf("%f", &n);
        if (n < 0.0 || n > 10.0)
            printf("nota invalida\n");
        else{
            soma += n;
            i++;
        }
    }
    printf("media = %.2f", soma/2);
    return 0;
}
