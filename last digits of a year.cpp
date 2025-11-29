#include<stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	(y%100<10)?printf("0%d",y%100):printf("%d",y%100);
	return 0;
}
