/*Filipe Gonçalves
OBI - 1049*/
#include <stdio.h>
#include <string.h>
int main(void){
    int i;
    char palavra[3][20];
    for( i = 0; i < 3; i++){
        scanf(" %[^\n]s", palavra[i]);
    }
    if (strcmp(palavra[0], "vertebrado") == 0){
        if(strcmp(palavra[1], "ave") == 0){
            if(strcmp(palavra[2], "carnivoro") == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else{
            if(strcmp(palavra[2], "onivoro") == 0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else{
        if(strcmp(palavra[1], "inseto") == 0){
            if(strcmp(palavra[2], "hematofago") == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else{
            if(strcmp(palavra[2], "hematofago") == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
}