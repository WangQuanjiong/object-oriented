����һ��github
==============
�԰汾����ʮ����Ч
**git�󷨺�**
�ȶ���2333
#����ʫϵ��#
##��ɽ##
��ɽ�춼�п���
����ʼ�����ɷ�
�ҳ��α����澰
*�������������*
~~~
#include<stdio.h>
int mian(void)
	#include<stdio.h>
int main(void)
{	


	char ch;int n;	
	scanf("%c",&ch);
	n=ch-'A'+1;
	for(int i=1;i<=n;i++)
	{	for(int j=n-i;j>0;j--)
		{
			printf(" ");
		}
		for(int c='A';c<'A'+i;c++)
		{
			printf("%c",c);
		
		}
		for(int k='A'+i-2;k>='A';k--)
		{
			printf("%c",k);
		}
		printf("\n");
	
	
	}
	return 0;
}
 ~~~