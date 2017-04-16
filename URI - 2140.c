/* Filipe Gonçalves
   URI - 2140*/
#include <stdio.h>
int main(void){
    int n, m, x;
    while (1){
        scanf("%i %i", &n, &m);
        if (n == 0 && m == 0)
            break;
        x = m - n;
        if (x == 2+5 || x == 2+10 || x == 2+20 || x == 2+50 || x == 2+100 || x == 5+10 || x == 5+20 || x == 5+50 || x == 5+100 || x == 10+20 || x == 10+50 || x == 10+100 || x == 20+50 || x == 20+100 || x == 50+100)
            printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}
