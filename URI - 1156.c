/* Filipe Gonçalves
   URI - 1156*/
#include <stdio.h>
int main(void){
    int i, b;
    float soma;
    soma = 1;
    b = 2;
    for(i = 3; i <= 39; i++){
        soma += (float)i/b;
        i++;
        b *= 2;
    }
    printf("%.2f\n", soma);
    return 0;
}
