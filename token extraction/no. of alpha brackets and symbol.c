#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	int i,c1=0,c2=0,c3=0;
	printf("Enter the expression:");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		c1++;
		else if(str[i]=='+' || str[i]=='*' )
		c2++;
		else if (str[i]=='(' || str[i]==')')
		c3++;
	}
		printf("no. of alphabets:%d\n",c1);
		printf("no. of symbols:%d\n",c2);
		printf("no. of brackets:%d\n",c3);
		return 0;
	}
