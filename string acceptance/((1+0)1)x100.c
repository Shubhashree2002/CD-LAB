#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(){
	
	char  s[50];
	printf("Enter the string: ");
	scanf("%s",s);
	int l = strlen(s);
	int dfa = 1 ;	
	
	if(!(s[l-1] == '0' && s[l-2] == '0' && s[l-3] == '1' )){
		printf("string is rejected\n");
		exit(0);
	}
	if(l >=5)
	for(int i = 0 ; i < l - 3 ; i+=2) {
		if(!(s[i] !='0' || s[i]!='1')){
		dfa =0;
		break;
		}
		if((s[i] == '1' || s[i] == '0') && s[i+1] == '1'){
			continue;
		}
		else{
			dfa = 0;
		}
	}
	else
		dfa = 0;
	
	if(dfa == 1){
		printf("Accepted\n");
	}else{
		printf("Rejected\n");
	}

}
