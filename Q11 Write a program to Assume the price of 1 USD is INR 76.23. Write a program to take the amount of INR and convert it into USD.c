#include<stdio.h>
int main()
{
	float a = 76.23 , b , c;
	
	printf("Enter any amount that you want to convert in USD\n");
	scanf("%f", &b);
	
	c = a*b;
	
	printf("value of %.2f in USD is %.2f",b,c);
	
	
	return 0;
}
