/* Filipe Gonçalves
   URI - 1145*/
#include <stdio.h>
int main(void){
    int x, y, i;
    scanf("%i %i", &x, &y);
    i = 1;
    while(i <= y){
        printf("%i", i);
        if (i%x == 0)
            printf("\n");
        else
            printf(" ");
        i++;
    }
    return 0;
}
