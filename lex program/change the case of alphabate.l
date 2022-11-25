%{
#include<stdio.h>
#include<string.h>
int i=0;
%}

%%
[a-zA-Z] {for(i=0;i<strlen(yytext);i++){
		if(yytext[i]>=65&&yytext[i]<=91)
			printf("%c",yytext[i]+32);
		else
			printf("%c",yytext[i]-32);
		}}
%%

int yywrap(void){}

int main()
{
	yylex();
	return 0;
}
