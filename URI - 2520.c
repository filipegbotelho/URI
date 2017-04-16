/* Filipe Gonçalves
   URI - 2520*/
#include <stdio.h>
#include <math.h>
int main(void){
    int n, m, i, j, um[2], dois[2], dist;
    while (scanf("%i %i", &n, &m) != EOF){
        int o[n][m];
        for(i = 0; i < n; i++){
            for (j = 0; j < m; j++){
            scanf("%i", &o[i][j]);
            if(o[i][j] == 1){
                um[0] = i;
                um[1] = j;
            }
            if(o[i][j] == 2){
                dois[0] = i;
                dois[1] = j;
            }
        }
    }
    dist = 0;
    dist = abs(um[0] - dois[0])+abs(um[1] - dois[1]);
    printf("%i\n", dist);
    }
    return 0;
}
