/*Filipe Gonçalves
  URI - 1332*/
#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    char palavra[6];

    scanf("%i", &n);
    while(n--){
        scanf(" %[^\n]s", palavra);
        if(strlen(palavra) == 5)
            printf("3\n");
        else if(strlen(palavra) == 3){
            if ((palavra[0] == 'o' && palavra[1] == 'n') || (palavra[1] == 'n' && palavra[2] == 'e')  || ( palavra[0] == 'o' && palavra[2] == 'e'))
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
