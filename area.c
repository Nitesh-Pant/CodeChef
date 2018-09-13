
#include<stdio.h>
int main()
{
	int l,b,a,p;
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	if(a>p)
	{
		printf("Area\n%d",a);
	}
	else if(a==p)
	{
		printf("Eq\n%d",a);
	}
	else
	{
		printf("Peri\n%d",p);
	}
	return 0;
}
