#include <stdio.h>

int main(void)
	{
		char a,b,c,d,e,f;
		while (scanf("%c%c%c%c",&a,&c,&b,&d)!=EOF)
			{   
				if ((a=='1')&&(c=='0') ) 
						{
							a='L';
							if (d=='1') 
								{
									scanf("%c",&e);
									if (e='0') b='L';
									getchar();
								}
							else {getchar();b=d;}
						}
				else if ((b=='1')&&(d=='0'))
					{ b='L';getchar();}
				switch (a) 
				{
					case 'L':a=1+'9';break;
					case 'J':a=2+'9';break;
					case 'Q':a=3+'9';break;
					case 'K':a=4+'9';break;
					case 'A':a=5+'9';break;
					case '2':a=6+'9';break;
				}
				switch (b) 
				{
					case 'L':b=1+'9';break;
					case 'J':b=2+'9';break;
					case 'Q':b=3+'9';break;
					case 'K':b=4+'9';break;
					case 'A':b=5+'9';break;
					case '2':b=6+'9';break;
				}
				if (a==b)
					printf("No winner");
				else if (a>b)
					printf("Alice win");
				else printf("Bob win");
			}
		return 0;
	}
