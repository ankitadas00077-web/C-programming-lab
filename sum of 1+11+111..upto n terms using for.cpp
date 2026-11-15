//wcp to display 1+11+111+1111...upto n terms.
#include<stdio.h>
int main(){
	int i,n;
	long term=0,sum=0;
	printf("enter the term:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		term=term*10+1;
		sum=sum+term;
	}
	printf("sum=%d",sum);
	return 0;
}

