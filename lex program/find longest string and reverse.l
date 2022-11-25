%{
#include <stdio.h>
#include <string.h>

char* longest;
%}

longest     [a-zA-Z]{8,}

%%

{longest}   {
            if (yyleng > strlen(longest)) {
                longest = (char*)realloc(longest, yyleng + 1);
                strcpy(longest, yytext);
            }
        }
<*>.|\n     /* skip all unrecognized text */

%%

void revstr(char *str1) {   
    static int i, len, temp;  
    len = strlen(str1);  
      
    if (i < len/2){    
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
        i++;  
        revstr(str1);  
    }  
} 


int main() {
    longest = (char*)malloc(1);
    longest[0] = '\0';
    yylex();
    printf("Longest string is '%s'\n", longest);
    //strrev(longest);
    revstr(longest);
    printf("Longest reverse string is '%s'\n", longest);
    free(longest);
    return 0;
}
