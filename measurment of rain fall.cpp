#include<stdio.h>
int main()
{
	int p;
	scanf("%d",&p);
	if(p<3)
	printf("LIGHT");
	else if(p>=3&&p<7)
	printf("M0DERATE");
	else
	printf("Heavy");
	return 0;
}
