%{
#include <stdio.h>
int count=0,count1=0;
%}
%%

"//" { count++; }
"/*" { count1++; }
"*/" { count1++; }

%%

int main()
{
    yyin=fopen("open.c","r");
    yyout=fopen("new.c","w");
    yylex();
    printf("Number of comment lines=%d\n",count+count1/2);
return 0;
}
