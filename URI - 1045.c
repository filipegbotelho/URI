#include <stdio.h>

int main(){
	
	double a, b, c, aux;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	//c,a,b
	if (a >= b && a <= c){
		aux = b;
		b = a;
		a = c;
		c = aux; 
	// b,a,c
	} else if (a >= c && a <= b){
		aux = b;
		b = a;
		a = aux;
	// c,b,a	
	} else if (b >= a && b <= c){
		aux = c;
		c = a;
		a = aux;
	// a,b,c		
	} else if (b >= c && b <= a){
	// b,c,a		
	} else if (c >= a && c <= b){
		aux = c;
		c = a;
		a = b;
		b = aux;
	// a,c,b		
	} else {
		aux = c;
		c = b;
		b = aux;		
	}
	
	if (a >= b+c){
		printf("NAO FORMA TRIANGULO\n");
	} else if (a*a == (b*b)+(c*c)){
		printf("TRIANGULO RETANGULO\n");
	} else if (a*a > (b*b)+(c*c)){
		printf("TRIANGULO OBTUSANGULO\n");
	}else if (a*a < (b*b)+(c*c)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	
	if ( a== b && b == c){
		printf("TRIANGULO EQUILATERO\n");
	} else if (a == b || b == c || a == c){
		printf("TRIANGULO ISOSCELES\n");
	}
	
	
	
	
	
	return 0;
}