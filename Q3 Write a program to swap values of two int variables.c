#include<stdio.h>
int main()
{
	int x = 10, y = 20, t;
	
	t = x;
	x = y;
	y = t;
	
	printf(" x = %d, y = %d",x,y);
	return 0;
	
	
}



/*#include<stdio.h>
int main()
{
	int x, y, t;
	
	
	printf("Write any Two number\n");
	scanf("%d %d",&x , &y);
	
	t = x;
	x = y;
	y = t;
	
	
	printf("Swapped value is\n%d \n%d",x,y);
	
	return 0;
	
	
}*/
