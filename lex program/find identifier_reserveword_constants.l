%{
#include <stdio.h>
int sc=0,lc=0,cc=0,wc=0;
%}

%%
int|double|float|break|default|typeof|char|return|continue|for|while|do|if|else|sizeof|struct|const|short|long {printf("Reserve word\n");}

[a-z A-Z_][a-z A-Z 0-9_]* {printf("Identifier");}

[0-9]* {printf("Constants");}

.* {printf("Invalid");}

%%

int main(){
	yylex();
	return 0;
}
