//wcp to calculate the sum of numbers from 1 to 5.
#include<stdio.h>
int main(){
	int i=1,sum=0;
	while(i<=5){
		sum+=i;
		i++;
	}
	printf("sum of the numbers from 1 to 5:%d\n",sum);
	return 0;
}
