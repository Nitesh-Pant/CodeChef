#include<stdio.h>
int main(void)
{
	int a,b,c,d,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(1<=a<=1000)
		if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	return 0;
}
