/*Filipe Gonçalves
  URI - 1113*/
#include <stdio.h>
int main(void){
    int x, y;
    do{
        scanf("%i %i", &x, &y);
        if (x > y)
            printf("Decrescente\n");
        else if (x < y)
            printf("Crescente\n");
    }while(x != y);
    return 0;
}