#include<stdio.h>
int main()
{
	int a,b,d;
	scanf("%d%d",&a,&b);
	d=a*b-(a+b);
	d=d<0?-d:d;
	printf("%d",d);
	return 0;
}
