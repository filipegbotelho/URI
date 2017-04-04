/*Filipe Gonçalves
  Uri - 1133*/
#include <stdio.h>
int main(void){
    int x, y;
    scanf("%i %i", &x, &y);
    if(x < y){
        for(x = x+1; x < y; x++){
            if(x%5 == 2 || x%5 == 3)
                printf("%i\n", x);
        }
    }
    else{
        for(y = y+1; y < x; y++){
            if(y%5 == 2 || y%5 == 3)
                printf("%i\n", y);
        }
    }
    return 0;
}
