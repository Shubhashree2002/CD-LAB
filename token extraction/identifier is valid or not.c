#include<stdio.h>
#include<string.h>
int Validity(char str[])
{
	int i,j;
	int len = strlen(str);
    if (!((str[0] >= 'a' && str[0] <= 'z')|| 
			(str[0] >= 'A' && str[0] <= 'Z')|| str[0] == '_'))
    {
		    return 0;
	}
	for (i = 1; i < len; i++) 
	{
        if (!((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z')
              || (str[i] >= '0' && str[i] <= '9')|| str[i] == '_'))
        {
			   return 0;
		}
    }
    return 1;
}
 
int main()
{
    char str[50];
    printf("Enter the string -: ");
    scanf("%s",str);
    if (Validity(str))
        printf("%s is Valid",str);
    else
        printf("%s is Invalid",str);
 
    return 0;
}
