/* Filipe Gonçalves
   URI - 1118*/
#include <stdio.h>
int main(void){
    int i, cont;
    float n, soma;
    cont = 1;
    do{
        soma = 0;
        i = 0;
        while(i < 2){
            scanf("%f", &n);
            if (n < 0.0 || n > 10.0)
                printf("nota invalida\n");
            else{
                soma += n;
                i++;
            }
        }
        printf("media = %.2f\n", soma/2);
        if (i == 2){
            do{
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%i", &cont);
            }while(cont < 1 || cont > 2);
        }
    }while(cont == 1);

    return 0;
}
