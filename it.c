#include<stdio.h>
int main()
{
	char a[100];
	int i,j,k;
	gets(a);
	for(i=0;a[i]!='\0';i++) 
	{
		if(a[i]=='i' && a[i+1]=='t')
		{
			for(j=i;j>=0 && a[j]!=' ';j--)
			{
				
			}
			for(k=j+1;a[k]!=' ' && a[k]!='\0'; k++)
			{
				printf("%c",a[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
