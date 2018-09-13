#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&n);
		if(pow(a,n)>pow(b,n))
		printf("1\n");
		else if(pow(a,n)==pow(b,n))
		printf("0\n");
		else
		printf("2\n");
	}
	return 0;
}
