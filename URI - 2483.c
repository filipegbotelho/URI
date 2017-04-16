/* Filipe Gonçalves
   URI - 2483*/
#include <stdio.h>
int main(void){
    int i, j;
    char palavra[13] = "Feliz natal!";
    scanf("%i", &i);
    while (i < 1 || i > 10000)
        scanf("%i", &i);
    for (j = 0; j < 13; j++){
        if (j == 9){
            while(i--)
                printf("%c", palavra[j]);}
        else
        printf("%c", palavra[j]);
    }
    printf("\n");
    return 0;
}
