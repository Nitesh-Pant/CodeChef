#include<stdio.h>
int main()
{
	int a;
	float b;
	scanf("%d\n",&a);
	scanf("%f\n",&b);
	if(a%5==0)
	{
		if(a+0.5>b)
		printf("%.2f",b);
		else
		printf("%.2f",b-(a+0.5));
	}
		else
		printf("%.2f",b);
return 0;
}  
