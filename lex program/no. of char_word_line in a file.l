%{
#include<stdio.h>
int sc=0,lc=0, cc=0,wc=0;
%}

%%
[\n] {lc++;cc+=yyleng;}
[\t] {sc++;cc+=yyleng;}
[^\t\n]+ {wc++; cc+=yyleng;}	
%%

int main(int argc , char*argv[])
{
   yyin=fopen("open.c","r");
    yyout=fopen("new.c","w");
	yylex();
	
	
	printf("\nNo. of characters=%d", cc);
	printf("\nNo. of words=%d", wc);
	printf("\nNo. of lines=%d\n",lc);
	return 0;
}
