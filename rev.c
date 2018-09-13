#include<stdio.h>
int main()
{
	int n,i,r,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int s=0;
		scanf("%d",&a);
		while(a!=0){
			r=a%10;
			s=s*10+r;
			a=a/10; 
		}
		printf("reverse=%d\n",s);
	}
	return 0;
}
