#include <stdio.h>
#include <math.h>

int main(){
	
	float a, b, c;
	
	scanf("%f %f %f", &a, &b, &c);
	
	if(a > labs(b-c) && a < b+c){
		printf("Perimetro = %.1f\n",a+b+c);
	}else if(b > labs(a-c) && b < a+c){
		printf("Perimetro = %.1f\n",a+b+c);
	}else if(c > labs(b-a) && c < b+a){
		printf("Perimetro = %.1f\n",a+b+c);
	}else{
		printf("Area = %.1f\n",((a+b)*c)/2);
	}
	
	
	
	
	
	
	
	
	return 0;
}