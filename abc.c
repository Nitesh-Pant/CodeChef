#include<stdio.h>
int main()
{
	int x;
	float y;
	scanf("%d",&x);
	scanf("%f",&x,&y);

	if(x>y)
	{
		printf("Output:\t");
		printf("%.2f",y);
	}
	else if(x<y && x%5==0)
	{
		y=y-(x+0.5);
		printf("Output:\t");
		printf("%.2f",y);
	}
	else if (x<y && x%5!=0)
	{
		printf("Output:\t");
		printf("%.2f",y);
	}
	return 0;
}
