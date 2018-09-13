#include<stdio.h>
int main()
{
	int a,b,d;
	
	scanf("%d%d", &a, &b);
	char c;
	scanf("%c",&c);
	if(c=='+')
	{
		d=a+b;
		printf("%d",d);
	}
	else if(c=='-')
	{
		d=a-b;
		printf("%d",d);
	}
	else if(c=='*')
	{
		printf("%d",d);
	}
	else if(c=='/')
	{
		printf("%.1f",(float)d);
	}
	else
	{
		printf("Invalid choice");
	}
	return 0;
}
