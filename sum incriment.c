#include<stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d%d",&i,&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("%d",sum);
}
