#include<stdio.h>
#include<math.h>
int main()
{
	int a[10][10],t[10][10],i,j,r,c;
	scanf("%d%d",&r,&c);
	printf("enter the elements in matrix a\n:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		t[j][i]=a[i][j];
	}
	printf("transpose of thr matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	return 0;
}

