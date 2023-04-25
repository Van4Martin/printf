#include "main.h"

/**


*/
void _print_string(char *str, int *len)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		(*len)++;
	}
}

