//WCP display odd numbers form 1 to n.
#include<stdio.h>
int main(){
	int i=1,n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("odd numbers form 1 to %d\n",n);
	while(i<=n){
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
