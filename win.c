#include<stdio.h>
int main()
{
	int s=0,t,n,r,a=0;
	scanf("%d",&t);
	if(1<=t<=20)
	while(t--)
	{
		scanf("%d",&n);
		s=n;
		while(n!=0)
		{
			r=n%10;
			a=a*10+r;
			n=n/10;
		}
		if(a==s)
		{
			printf("wins\n");
		}
		else{
			printf("losses\n");
		}
		a=0;
	}
	return 0;
}
