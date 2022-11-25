
#include <stdio.h>
#include <string.h>
int dfa=1;

void q1(char c)
{
	if(c=='a')	dfa=2;
	else if(c=='b')	dfa = 1;
	else dfa = -1;
}

void q2(char c)
{
	if(c=='b')	dfa=2;
	else if(c=='a')	dfa = 1;
	else dfa = -1;
}

int isAccepted(char str[])
{
	int i,len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(dfa == 1)
			q1(str[i]);
		else if(dfa==2)
			q2(str[i]);
		else
			return 0;	
	}
	if(dfa==1)
		return 1;
	else	return 0;
}
int main()
{
	char str[50];
	printf("Enter the string -: ");
	gets(str);
	if(isAccepted(str))
		printf("\nAccepted");
	else
		printf("\nRejected");
	return 0;
}


