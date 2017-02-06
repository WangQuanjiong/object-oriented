#include <stdio.h>

int main(void)
	{
		double v1,v2,v3,max;
		int i;
		
		scanf("%lf %lf %lf",&v1,&v2,&v3);
		max=v1;i=1;
		if (v2>max)
			{max=v2;i=10;}
		else if (v2==max)
			i=i+10;
		if (v3>max)
			{max=v3;i=100;}
		else if (v3==max)
			i=i+100;
		if ((i%10)==1) printf("hare\n");
		i/=10;
		if ((i%10)==1) printf("tortoise1\n");
		i/=10;
		if ((i%10)==1) printf("tortoise2\n");
	}
		
		

