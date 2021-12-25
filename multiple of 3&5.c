#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter the six values of a,b,c,d,e,f");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	int n=b/a;
	int l=a*n;
	int sum1=n*(a+l)/2;
	int m=d/c;
	int j=c*m;
	int sum2=m*(c+j)/2;
	int o=f/e;
	int z=o*e;
	int sum3=o*(e+z)/2;
	int r=sum1+sum2-sum3;
	printf(" sum of multiples %d %d %d %d is %d",a,b,n,l,sum1);
	printf("\n sum of the multiples %d %d %d %d is%d",c,d,m,j,sum2);
	printf("\n sum of the multiples %d %d %d %d is %d",e,f,o,z,sum3);
	printf("\n sum of multiples of a and c is%d+%d-%dis %d", sum1,sum2,sum3,r);
	return 0;
}
