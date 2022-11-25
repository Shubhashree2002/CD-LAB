#include<stdio.h>
#include<string.h>
int main(void){
	char str[100];
	int len=0,i,j,o=0,z=0;
	printf("Enter a string:");
    gets(str);
    len = strlen(str);
    for(j=0;j<len;j++)
    {
	    if(str[j]!='0'&& str[j]!='1'){
	    		printf("Rejected");
	    		break;
			}
		else
		{
		   for(i=0;i<len;i++)
		   {
				if(str[i]=='0')
					++z;
				else if( str[i]=='1')
					++o;
			}
		}
		j++;
	}
	if(z%2==0 && o%2!=0)
		printf("Accepted");
	else
		printf("Rejected");
return 0;
}
