/*wcp to accept a number and find the sum of its individual digits repeadly till the
result is a single digit*/
#include<stdio.h>
int main(){
	int n,sum,digit;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>=10){
		sum=0;
		while(n>0){
			digit=n%10;
			sum=sum+digit;
			n=n/10;
		}
		n=sum;
	}
	printf("single digit result:%d",n);
	return 0;
}
