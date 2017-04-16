/* Filipe Gonçalves
   URI - 2162*/
#include <stdio.h>
int main(void){
    int n, i, flag;
    flag = 0;
    scanf("%i", &n);
    int h[n];
    for (i = 0; i < n; i++)
        scanf("%i", &h[i]);
    if (n > 2){
        for (i = 1; i+1 < n; i++){
            if(!((h[i] > h[i-1] && h[i] > h[i+1]) || (h[i] < h[i-1] && h[i] < h[i+1]))){
                flag = 1;
                if (flag == 1)
                    break;
            }
        }
    }
    else{
        if (!(h[1] != h[0]))
            flag = 1;
    }
    flag == 0 ? printf("1\n") : printf("0\n");
    return 0;
}
