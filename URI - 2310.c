#include <stdio.h>

int main(void){

    int n, s[4], b[4], a[4], i;
    char nome[10000];
    s[2] = b[2] = a[2] = 0;
    scanf("%i", &n);
    for(i = 0; i < n; i++){
        scanf(" %s", nome);
        scanf("%i %i %i", &s[0], &b[0], &a[0]);
        scanf("%i %i %i", &s[1], &b[1], &a[1]);
        s[2] += s[0];
        s[3] += s[1];
        b[2] += b[0];
        b[3] += b[1];
        a[2] += a[0];
        a[3] += a[1];
    }
    printf("Pontos de Saque: %.2f %%.\n", (float)s[3]/s[2]*100.00);
    printf("Pontos de Bloqueio: %.2f %%.\n", (float)b[3]/b[2]*100.00);
    printf("Pontos de Ataque: %.2f %%.\n", (float)a[3]/a[2]*100.00);
    return 0;
}
