/* Filipe Gonçalves
   URI - 2523*/
#include <stdio.h>
int main(void){
    char alfabeto[27];
    int n, m;
    while(scanf(" %s", alfabeto) != EOF){
        scanf("%i", &n);
        while(n--){
            scanf("%d", &m);
            printf("%c", alfabeto[m-1]);
        }
        printf("\n");
    }
    return 0;
}
