#include<stdio.h>
int main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	if(a>100)
	{
		printf("no valid");
	}
	if(90<=a&&a<=100)
	{
		printf("0 grade");
	}
	if(80<=a&&a<90)
	{
		printf("A grade");
	}
	if(70<=a&&a<80)
	{
		printf("B grade");
	}
	if(60<=a&&a<70)
	{
		printf("C grade");
	}
	if(50<=a&&a<60)
	{
		printf("D grade");
	}
	else
	{
		printf("fail");
	}
}
