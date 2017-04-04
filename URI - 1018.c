/*Programa que fornece menor quantidade possivel de notas*/
#include<stdio.h>


int main(){
	
	int nota,cedula_100,cedula_50,cedula_20, cedula_10, cedula_5, cedula_2, cedula_1;
	
	cedula_100 = cedula_50 = cedula_20 = cedula_10 = cedula_5 = cedula_2 = cedula_1 = 0;
	
	scanf("%i", &nota);
	
	printf("%i\n", nota);	
	
	while(nota >= 100){
		nota=nota-100;
		cedula_100++;
	}
	while(nota >= 50){
		nota=nota-50;
		cedula_50++;
	}
	while(nota >= 20){
		nota=nota-20;
		cedula_20++;
	}
	while(nota >= 10){
		nota=nota-10;
		cedula_10++;
	}
	while(nota >= 5){
		nota=nota-5;
		cedula_5++;
	}
	while(nota >= 2){
		nota=nota-2;
		cedula_2++;
	}
	while(nota >= 1){
		nota=nota-1;
		cedula_1++;
	}
	

	printf("%i nota(s) de R$ 100,00\n",cedula_100);
	printf("%i nota(s) de R$ 50,00\n",cedula_50);
	printf("%i nota(s) de R$ 20,00\n",cedula_20);
	printf("%i nota(s) de R$ 10,00\n",cedula_10);
	printf("%i nota(s) de R$ 5,00\n",cedula_5);
	printf("%i nota(s) de R$ 2,00\n",cedula_2);
	printf("%i nota(s) de R$ 1,00\n",cedula_1);
	
	return 0;
}