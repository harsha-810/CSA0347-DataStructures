#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	d=a;
	c=0;
	do
	{
		b=a%10;
		c=c+b*b*b;
		a=a/10;
	}while(a>0);
	if(c==d)
	{
		printf("\n the given number is amstrong number");
	}
	else
	{
		printf("\n the given number is not a amstrong number");
	}
}
