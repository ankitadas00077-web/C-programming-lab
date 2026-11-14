/*wcp to read the basic salary and calculate HRA=10% of salary, DA=5% of salary.
If the salary>=20,000...then apply 10% of tax else 7% of tax. Display the net salary.*/
#include<stdio.h>
int main(){
	float salary,hra,da,tax,netsalary;
	printf("enter the basic salary:");
	scanf("%f",&salary);
	hra=0.10*salary;
	da=0.05*salary;
	if(salary>20000){
		tax=0.10*salary;
	}
	else{
		tax=0.07*salary;
	}
	netsalary=salary+hra+da-tax;
	printf("netsalary=%.2f",netsalary);
	return 0;
}
