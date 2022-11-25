#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	printf("Enter the string-:");
	gets(s);
	int final_state,ps = 0,i;
	int len = strlen(s);
	for (i = 0; i < len; i++) 
	{

		if ((s[i] == '0'&& ps == 0)|| (s[i] == '1' && ps == 3)) 
		{
			final_state = 1;
		}
		else if ((s[i] == '0'&& ps == 3)|| (s[i] == '1'&& ps == 0)) 
		{
			final_state = 2;
		}
		else if ((s[i] == '0'&& ps == 1)|| (s[i] == '1'&& ps == 2)) 
		{
			final_state = 0;
		}
		else if ((s[i] == '0'&& ps == 2)|| (s[i] == '1'&& ps == 1))
		{
			final_state = 3;
		}

		ps = final_state;
	}

	if (final_state == 3) printf("Accepted\n");
	else printf("Rejected\n");
	return 0;
}
