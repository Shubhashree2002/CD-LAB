%{
#include<stdio.h>
int count=0;
%}

%%

[a-z A-Z_][a-z A-Z 0-9_]* {count++;}

%%

void yywarp(){}
int main()
{
    yyin=fopen("open.c","r");
    yyout=fopen("new.c","w");
    yylex();
    printf("Number of identifier=%d\n",count);

   return 0;
}
