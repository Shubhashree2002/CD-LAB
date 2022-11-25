#include<stdio.h>
#include<string.h>

void main(void){
	char s[50];
	printf("Enter the string: ");
	scanf("%s",s);
	int i,len = strlen(s);
	
	for(i=0; i<=len-3; i++){
		if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0'){
			printf("Rejected.\n");
			return;
			break;
		}
	}
	printf("Accepted.\n");
}
