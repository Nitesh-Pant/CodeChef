#include<stdio.h>
int main()
{
	int n,t,r,c;
	scanf("%d",&n);
 		t = n;
  if (!(t>=0 && t<=9)){
   while (t!= 0){
      r= t%10;
      t= t/10;
   }
	c=n%10;
	printf("%d",r+c);
	}
	else{
		c=n;
		printf("%d",c);
	}	
return 0;
}
