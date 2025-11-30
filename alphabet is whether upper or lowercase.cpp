#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c>64&&c<=90)
	printf("uppercase alphabet");
	else if(c>96&&c<=122)
	printf("lowercase alphabet");
	else
	printf(not an alphabet);
	return 0;
}
