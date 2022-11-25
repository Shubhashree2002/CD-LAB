#include<stdio.h>
#include<string.h>

void main(void){
	char s[50];
	printf("Enter the string: ");
	scanf("%s",s);
	int i,len = strlen(s),x=0,y=0;
	for (i=0;i<len;i++)
	{
		if(s[i]=='a') x++;
		else if(s[i]=='b') y++;
	}
	if (x%2==0 && y%2==0){
		printf("\nAccepted");
	}
	else{
		printf("Rejected");
	}
}
