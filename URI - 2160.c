#include <stdio.h>
#include <string.h>

int main(void){
    char nome[501];
    gets(nome);
    strlen(nome) > 80 ? printf("NO\n") : printf("YES\n");
    return 0;
}
