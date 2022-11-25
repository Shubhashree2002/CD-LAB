#include<stdio.h>
#include<string.h>

void main(void){
	char s[50];
	printf("Enter the string: ");
	scanf("%s",s);
	int i,len = strlen(s);
	
	for(i=0; i<len; i++){
		if(s[0]=='1' && s[1]=='0'){
			printf("Rejected.\n");
			return;
		}
	}
	printf("Accepted.\n");
}
