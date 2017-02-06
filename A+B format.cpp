#include<stdio.h>
#include<stdlib.h>
int main(void)
{	int a,b,c,m,t,sum;
	scanf("%d %d",&a,&b);
	sum=a+b;
	if (sum<0)
	{	printf("-");
		sum=abs(sum);
	}
	m=sum/1000000;
	t=(sum-m*1000000)/1000;
	c=(sum-m*1000000)%1000;
	if(m!=0) 
	{	
		printf("%d,%03d,%03d",m,t,c);
	}
	else
	{	if(t!=0)
		{
			printf("%d,%03d",t,c);
			
		}
		else
		{
			printf("%d",c);
		
		}
	}
	return 0;

}
	 
