%{
    #include "y.tab.h"
    #include <stdlib.h>
    void yyerror(char *);
%}
%%
[0-9]+      {
                yylval = atoi(yytext);
                return INTEGER;
            }
	/* variables */
[a-z]       {
                yylval = *yytext - 'a';
                return VARIABLE;
            }
[-+*/=\n]      return *yytext;
[ \t]       ; /* skip whitespace */
.           yyerror("invalid character");
%%



