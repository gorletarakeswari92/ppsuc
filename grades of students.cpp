#include<stdio.h>
int main()
{
	int phy,che,bio,math,com,per;
	scanf("%d%d%d%d%d%d",&phy,&che,&bio,&math,&com,&per);
	per(phy+che+bio+math+com)/5;
	if(per>=90)
	printf("Grade A");
	else if (per>=80)
	printf("Grade B");
	else if(per>=70)
	printf("Grade C");
	retuen 0;
}
