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
		if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/')
		c1++;
		else if (str[i]=='(' || str[i]==')')
		c2++;
		else if(str[i]>=48 && str[i]<=57)
		c3++;
	}
		printf("no. of operators:%d\n",c1);
		printf("no. of brackets:%d\n",c2);
		printf("no. of digits:%d\n",c3);
		return 0;
	}
