/*Filipe Gonçalves
  URI - 1155*/
#include <stdio.h>
int main(void){
    int i;
    float soma;
    soma = 0;
    for(i = 1; i <= 100; i++)
        soma += (float)1/i;
    printf("%.2f\n", soma);
    return 0;
}
