#include <unistd.h>
#include <stdio.h>

void my_putchar(char c){
	write(1,&c,1);
}

void my_ite(char *str){
	while(*str !='\0')
	{
		my_putchar(*str);
		str++;
	}
}


int main(int argc, char* argv[])
{
	for(int i=argc;i>=0;i--)
	{
		if( argv[i] !=NULL)
		{
			my_ite(argv[i]);
			my_putchar('\n');
		}
		
	}
	return 0;
}
