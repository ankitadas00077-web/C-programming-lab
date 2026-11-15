//wcp to display 5,10,15,20,25...upto n terms.
#include<stdio.h>
int main(){
	int i,n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\t",5*i);
	}
	return 0;
}
