#include <stdio.h>
#include <math.h>

int main(void)
	{
		int a,b,c;
		int swap,i;
		
		scanf("%d %d %d",&a,&b,&c);
		if (abs(a)>abs(b))	// a&b
			{swap=a;a=b;b=swap;}
		else if (abs(a)==abs(b))
		    	if (a>b)
			    	 {swap=a;a=b;b=swap;}
			    	 
		if (abs(a)>abs(c))	// a&c 
			{swap=a;a=c;c=swap;}
		else if (abs(a)==abs(c))
		    	if (a>c)
			    	 {swap=a;a=c;c=swap;} 
			    	 
		if (abs(b)>abs(c)) 	// b&c
			{swap=b;b=c;c=swap;}
		else if (abs(b)==abs(c))
		    	if (b>c)
			    	 {swap=b;b=c;c=swap;} 
		printf("%d %d %d",a,b,c);
		return 0;
	}
