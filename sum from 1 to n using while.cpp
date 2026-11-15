//wcp to calculate the sum of numbers from 1 to n.
#include<stdio.h>
int main(){
	int i=1,sum=0,n;
	printf("the the number:");
	scanf("%d",&n);
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("the sum is:%d\n",sum);
	return 0;
}
