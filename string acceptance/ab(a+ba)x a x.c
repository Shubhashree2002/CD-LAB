#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len=0,i,j,b=0,a=0;
	
	printf("Enter a string:");
    gets(str);
    int dfa=0;
    len = strlen(str);
    
			if(str[0]=='a' && str[1]=='b')
			{
				for(i=2;i<len;i++)
		   		{
		   			if(str[i]=='a')	dfa=0;
		   			else if(str[i]=='b'&&str[i+1]=='a')
					    dfa=0;
					else
						dfa=1;
	    						
				}
			}
			else{
					dfa=1;
				}
	if(dfa==0)
		printf("Accepted");
	else
		printf("Rejected");

return 0;
}
