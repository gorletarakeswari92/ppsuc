#include<stdio.h>
int main()
{
	int num,i,count1=0,count2=0;
	printf("enter a positive number:");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		if (num%i==0)
		count1++;
		i++;
	}
	if (count1==2)
	printf("given number is prime:");
	else
	printf("given number is not a prime:");
	return 0;
}
