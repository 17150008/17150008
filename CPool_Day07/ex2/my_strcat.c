#include <stdio.h>

char *my_strcat(char *dest, const char *src)  
{  
	char *tmp = dest;    
    while (*dest)  
       dest++;  
    while ((*dest++ = *src++) != '\0');
    return tmp;  
}  


void main()
{
	char dest[10] = "asd";
	char src[] = "aaaaaaaaaaaab";
	char *a = my_strcat(dest,src);
	printf("%s",a);
}
