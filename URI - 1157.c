/*Filipe Gonçalves
  URI - 1157*/
#include <stdio.h>
int main(void){
    int numero, i;
    scanf("%i", &numero);
    for (i = 1; i <= numero; i++){
        if (numero%i == 0)
            printf("%i\n", i);
    }
    return 0;
}
