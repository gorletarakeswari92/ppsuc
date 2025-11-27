//square root of agiven number
#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	//input
	printf("enter an integer");
	scanf("%1f",&num);
	root=sqrt(num);
	printf("the square root of %.2lfis%.2lf.",num,root);
	return 0;
}

