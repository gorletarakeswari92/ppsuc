#include<math.h>
#include<stdio.h>
int main()
{
	double a,b,c,d,root1,root2,real part,img part;
	printf("enter coefficients a,b and c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		printf("root1=%.2lf and root2=%.2lf,root1,root2");
	}
	else if(d==0)
	{
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2lf",root1);
	}
	else
	real part=-b/(2*a);
	printf("root1=root2=%.2lf",root1);
}
else
}
real part=-b/(2*a);
imag part=sqrt(-d)/(2*a);
printf("root1=%.2lf+%.2lfi and root2=%.2lf-%.2lfi",real part,imag part,real part,imag part);
}
return 0;
}
	
}
