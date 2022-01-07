//factorial
#include<stdio.h>
void main()
{
	int a,b=1,i=1;
	printf("enter a number :");
	scanf("%d",&a); 
	for (i;i<=a;i++)   
	{
		b*=i;
	}
	printf("factorial  is %d",b);
}
