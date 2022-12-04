#include<stdio.h>
int main()
{
	int x = 10500, y = 20500;
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	printf(" x = %d, y = %d",x,y);
	return 0;
	
	
}
