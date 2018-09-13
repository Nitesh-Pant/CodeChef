#include<stdio.h>
int main()
{
	int n,a[10],b[10],c[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		if(a[i]<b[i])
		{
			if(b[i]<c[i])
			{
				printf("%d\n",b[i]);
			}
			else
			{
				printf("\n%d\n",c[i]);
			}
		}
		else if(a[i]>b[i])
		{
			if(a[i]<c[i])
			{
				printf("\n%d\n",a[i]);
			}
			else
			{
				printf("\n%d\n",c[i]);
			}
		}
	}
}
