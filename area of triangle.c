//area of triangle
#include<stdio.h>
int main()
{
	float b,h,area;
	printf("enter  b,h of triangle:");
	scanf("%f%f",&b,&h);
	area=(b*h)/2;
	printf("area of triangle:%.3f\n",area);
	return 0;
}
