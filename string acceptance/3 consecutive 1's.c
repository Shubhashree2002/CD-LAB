#include<stdio.h>
#include<string.h>
void main(){
	
	char  s[100];
	printf("enter a string: ");
	scanf("%s",s);
	int len = strlen(s);
	int dfa = 1 ;	
	for(int i = 0 ; i < len ; ++i) {
		if(!(s[i] !='0' || s[i]!='1')){
		dfa =1;break;}
	}
	if(len >= 3 && s[len-1] == '1' && s[len-2] == '1' && s[len-3] == '1'){
		dfa  =0;
	}
 
	if(dfa == 0){
		printf("Accepted\n");
	}else{
		printf("Rejected\n");
	}

}
