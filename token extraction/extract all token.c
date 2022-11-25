#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool limiter(char ch)
{
	if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
		ch == '/' || ch == ',' || ch == ';' || ch == '=' || ch == '(' || ch == ')' 
		|| ch == '{' || ch == '}')
		return (true);
	return (false);
}

bool Operator(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' ||
		ch == '/' || ch == '>' || ch == '<' ||
		ch == '=')
		return (true);
	return (false);
}

bool Identifier(char* str)
{
	if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
		str[0] == '3' || str[0] == '4' || str[0] == '5' ||
		str[0] == '6' || str[0] == '7' || str[0] == '8' ||
		str[0] == '9' || limiter(str[0]) == true)
		return (false);
	return (true);
}

bool Keyword(char* str)
{
	if (!strcmp(str, "if") || !strcmp(str, "else") 
		|| !strcmp(str, "while") || !strcmp(str, "do") 
		|| !strcmp(str, "int") || !strcmp(str, "double") 
		|| !strcmp(str, "float")|| !strcmp(str, "return") 
		|| !strcmp(str, "char")	|| !strcmp(str, "void"))
		return (true);
	return (false);
}

bool Integer(char* str)
{
	int i, len = strlen(str);
	bool hasDecimal = false;
	if (len == 0)
		return (false);
	for (i = 0; i < len; i++) {
		if (str[i] != '0' && str[i] != '1' && str[i] != '2'
			&& str[i] != '3' && str[i] != '4' && str[i] != '5'
			&& str[i] != '6' && str[i] != '7' && str[i] != '8'
			&& str[i] != '9' || (str[i] == '-' && i > 0))
			return (false);
	}
	return (true);
}

char* subString(char* str, int l, int r)
{
		int i;
		char* subStr = (char*)malloc(sizeof(char) * (r - l + 2));
		
		for (i = l; i <= r; i++)
		{
			subStr[i - l] = str[i];
		}
		subStr[r - l + 1] = '\0';
	return (subStr);
}

void parseString(char* str)
{
	int l = 0, r = 0;
	int len = strlen(str);

	while (r <= len && l <= r) {
		if (limiter(str[r]) == false)
			r++;

		if (limiter(str[r]) == true && l == r) {
			if (Operator(str[r]) == true)
				printf("'%c' IS AN OPERATOR\n", str[r]);

			r++;
			l = r;
		} else if (limiter(str[r]) == true && l != r
				|| (r == len && l != r)) {
			char* subStr = subString(str, l, r - 1);

			if (Keyword(subStr) == true)
				printf("'%s' IS A KEYWORD\n", subStr);

			else if (Integer(subStr) == true)
				printf("'%s' IS AN INTEGER\n", subStr);

			else if (Identifier(subStr) == true && limiter(str[r - 1]) == false)
				printf("'%s' IS A VALID IDENTIFIER\n", subStr);

			else if (Identifier(subStr) == false && limiter(str[r - 1]) == false)
				printf("'%s' IS NOT A VALID IDENTIFIER\n", subStr);
			l = r;
		}
	}
	return;
}

int main()
{
	
	char str[100] = "int 1a = b + 1c + 4; ";
	parseString(str);
	return (0);
}

