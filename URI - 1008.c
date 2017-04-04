#include<stdio.h>

int main(void)
{
	int x, y;
	float z;
	
	scanf("%i %i %f", &x, &y, &z);	
	
	
	printf("NUMBER = %i\n",x);
	
	printf("SALARY = U$ %.2f\n", z*y);
	
	
	
	return 0;
}