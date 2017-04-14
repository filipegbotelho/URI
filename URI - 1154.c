/* Filipe Gonçalves
   URI - 1154*/
#include <stdio.h>
int main(void){

    int n, i;
    float media;
    media = 0;
    i = 0;
    while(1){
        scanf("%i", &n);
        if (n < 0)
            break;
        media += n;
        i++;
    }
    printf("%.2f\n", media/i);

    return 0;
}
