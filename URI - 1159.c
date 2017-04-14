/* Filipe Gonçalves
   URI - 1159*/
#include <stdio.h>
int main(void){
    int x, i, j, soma;
    while(1){
        scanf("%i", &x);
        if (x == 0)
            break;
        soma = i = 0;
        while(i < 5){
            if (x%2 == 0){
                soma += x;
                i++;
                x +=2;
            }
            else
                x++;
        }
        printf("%i\n", soma);
    }
    return 0;
}
