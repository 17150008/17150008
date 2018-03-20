
#include <stdio.h>

   char *my_strlowcase(char *str)
{
	if(str != NULL)
	{
		for(int i=0; str[i] != '\0';i++)
		{
			if((str[i] <= 'Z' && str[i] >= 'A'))	
				str[i]+=32;
			else
				continue;
		}
		return str;
	}
}