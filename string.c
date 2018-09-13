#include<stdio.h>
int main()
{
	int t,n,i; 	
	char c;
	scanf("%d",&t);
	while(t--)
	{	
		printf("Enter the string length");
		scanf("%d",&n);
	 	char str[n+1];
	 	scanf("%s",&str);
		 /* for(i=0;i<n;i++)
	 	{
	 	 	scanf("%s",&str[i]);
		}
		*/
	for(i=0;str[i]!='\0';i+2)
	{
		printf("heelll");
		c=str[i];
		str[i]=str[i+1];
		str[i+1]=c;
		
		printf("%s",str);
	}
}
return 0;
}
