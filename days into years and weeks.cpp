#include<stdio.h>
#include<math.h>
int main()
{
	int d,y,w;
	scanf("%d",&d);
	y=d/365;
	d=d-y*365;
	w=d/7;
	printf("%d\n%d",y,w);
	return 0;
}
