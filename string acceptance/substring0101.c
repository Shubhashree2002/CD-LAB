#include<stdio.h>
#include<string.h>

void main(void){
	char s[50];
	printf("Enter the string: ");
	scanf("%s",s);
	int len = strlen(s);
	
	for(int i=0; i<len-3; i++){
		if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='1'){
			printf("String accepted.\n");
			return;
		}
	}
	printf("String NOT accepted.\n");
}
