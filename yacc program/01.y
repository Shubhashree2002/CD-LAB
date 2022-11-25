%{
/* Definition section */
#include<stdio.h>
#include<stdlib.h>
%}

%token ZERO ONE

/* Rule Section */
%%

r:s{printf("Valid String");}
;

s:n
|ZERO a
|ONE b
;

a:n a
|ZERO
;

b:n b
|ONE
;

n:ZERO
|ONE
;
%%

int yyerror(char *msg)
{
printf("invalid string\n");
exit(0);
}

//driver code
main()
{
printf("enter the string\n");
yyparse();
}

