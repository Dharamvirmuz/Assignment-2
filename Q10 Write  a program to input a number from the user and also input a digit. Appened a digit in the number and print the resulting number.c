#include<stdio.h>
int main()
{
	int x, y;
	
	
	
	printf("Enter any number and any digit\n");
	scanf("%d %d", &x, &y);
	
	
	x = x*10;
	x = x + y;
	
	printf("Now the combined value is %d",x);
	
	
	return 0;
	
	
}

/*#include<stdio.h>
int main()
{
	int x = 875, y = 9;
	x = x*10;
	x = x + y;
	
	printf("%d",x);
	
	return 0;
	
	
}*/
