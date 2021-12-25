#include<stdio.h>
int main()
{
	int a=2888;
    int b=a/2000;
	int c=a%2000;
	int d=c/500;
	int e=c%500;
	int f=e/200;
	int g=e%200;
	int h=g/100;
	int i=g%100;
	int j=i/50;
	int k=i%50;
	int l=k/20;
	int m=k%20;
	int n=m/10;
	int o=m%10;
	int p=o/5;
	int q=o%5;
	int r=q/2;
	int s=q%2;
	int t=s/1;
	int u=s%1;
	printf("two thousand notes %d %d",b,c);
	printf("\n five hundred notes %d %d",d,e);
	printf("\n two hundred note %d %d",f,g);
	printf("\n hundred note %d %d",h,i);
	printf("\n fifty note %d %d",j,k);
	printf("\n twenty note %d %d",l,m);
	printf("\n ten note %d %d",n,o);
	printf("\n five note %d %d",p,q);
	printf("\n two coin %d %d",r,s);
	printf("\n one coin %d %d",t,u);
return 0;
}

