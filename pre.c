#include<stdio.h>
int main()
{
	int a=0,b=0;
	a=b++ + b++;
	printf("%d",a);
	a=0,b=0;
	a=++b + ++b;
	printf("\n%d",a);
	a=0,b=0;
	a=b++ + ++b;
	printf("\n%d",a);
	a=0,b=0;
	a=b++ + b++ + ++b;
	printf("\n%d",a);
	a=0,b=0;
	a=++b + ++b + ++b;
	printf("\n%d",a);
	a=0,b=0;
	a=++b + ++b + b++;
	printf("\n%d",a);
}
