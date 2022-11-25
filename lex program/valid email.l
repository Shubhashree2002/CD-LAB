%{
int flag=0;
%}

%%
 [a - z.0 - 9 _] + @[a - z] + ".com" | ".in"| ".edu"
%%
 
int yywrap(){}
int main() {
  yylex();
  if (flag == 1)
    printf("Accepted");
  else
    printf("Not Accepted");
}
