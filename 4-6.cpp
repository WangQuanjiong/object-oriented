#include <stdio.h>

int main(void)
	{
		long a1,a2,b1,b2;
		scanf("%d %d",&a1,&b1);
		scanf("%d %d",&a2,&b2);
		if ((a1+a2)==0)
			{if ((b1+b2)==0) printf("0");}
		else  
			{printf("%d",(a1+a2));
			 if ((b1+b2)!=0) 
			 	printf("+");}
		if ((b1+b2)==0);
		else if ((b1+b2)==1)
			printf("i");
		else printf("%di",(b1+b2));
		return 0;
	}
