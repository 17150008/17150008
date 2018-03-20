

#include <stdio.h>
#include <string.h>
int my_strcmp(char const *s1,char const *s2)
{
	if((NULL != s1) && (NULL != s2))
	{
		int ret = 0;
		while(*s1 == *s2)
		{
			s1++;
			s2++;
			if(*s1 == '\0')
				return 0;
		}
		ret = *s1 - *s2;
		return ret;
	}
}
