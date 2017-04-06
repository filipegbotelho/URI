/*Filipe Gonçalves
  URI - 1114*/
#include <stdio.h>
int main(void){
    int n;
    do{
        scanf("%i", &n);
        if(n == 2002)
            printf("Acesso Permitido\n");
        else
            printf("Senha Invalida\n");
    }while(n != 2002);
    return 0;
}
