#include<stdio.h>
int main()
{
	int n,i,a[i],b[i],c[i],x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		if(a[i]>b[i])
		{
			c[i]=a[i]-b[i];
		}
		else
		{
			c[i]=b[i]-a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(c[0]<c[i+1])
		{
			c[0]=c[i];
		}
	}
	printf("difference:%d",c[0]);
	for(i=0;i<n;i++)
	{
		if(a[i]<b[i])
		{
			printf("\n 2");
		}
		else
		{
			printf("\n 1");
		}
	}
	return 0;
}
