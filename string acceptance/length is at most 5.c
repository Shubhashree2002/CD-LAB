#include<stdio.h>
#include<string.h>

void main(void){
	char s[50];
	printf("Enter the string: ");
	scanf("%s",s);
	int i,len = strlen(s);
	if (len<=5) printf("Accepted.\n");
	else printf("Rejected.\n");
	return 0;
}
