#include<stdio.h>
int main(){
	int t,n[100],a,b,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<t;i++){
		while(n[i]!=0){
				a=n[i]%10;
				b=b+a;
				n[i]=n[i]/10;
			}
			printf("%d\n",b);
			b=0;}
}
