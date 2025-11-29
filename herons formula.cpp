#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,h;
	scamf("%d %d %d ",&a,&b,&c);
	s=(a+b+c)/2.0;
	h=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%.4f",h);
	return 0;
}
