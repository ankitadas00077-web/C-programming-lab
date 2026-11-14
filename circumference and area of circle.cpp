//Wcp to calculate the circumference and area of a circle.
#include<stdio.h>
int main(){
	float r,c,area;
	const float PI=3.14159;
	printf("enter the radius of the circle:");
	scanf("%f",&r);
	c=2*PI*r;
	area=PI*r*r;
	printf("circumference of the circle:%2f\n",c);
	printf("area of the circle:%2f\n",area);
	return 0;
}
