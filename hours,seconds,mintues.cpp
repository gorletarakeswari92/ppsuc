#include<stdio.h>
#include<math.h>
int main()
{
	int s,h,m;
	scanf("%d",&s);
	h=s/3600;
	s=s-h*3600;
	m=s/60;
	s=s-m*60;
	printf("H:M:S-%d:%d:%d",h,m,s);
	return 0;
}
